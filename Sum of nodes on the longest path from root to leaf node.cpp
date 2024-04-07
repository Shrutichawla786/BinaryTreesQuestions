Q.Sum of nodes on the longest path from root to leaf node
link-->https://www.geeksforgeeks.org/problems/sum-of-the-longest-bloodline-of-a-tree/1
code--> void solve(Node * root , int &maxsum , int sum , int len , int &maxlen){
        if(root==NULL){
            if(maxlen<len){
                maxlen=len;
                maxsum= sum;
            }
            else if(len==maxlen){
                maxsum = max(maxsum , sum);
            }
            return;
        }
        sum = sum+root->data;
        solve(root->left , maxsum , sum , len+1 , maxlen);
        solve(root->right , maxsum , sum , len+1 , maxlen);
    }
    
    int sumOfLongRootToLeafPath(Node *root)
    {
        //code here
        int maxsum = INT_MIN;
        int sum=0;
        int maxlen=0;
        int len=0;
        solve(root , maxsum , sum , len , maxlen);
        return maxsum;
    }
Expected Time Complexity: O(n)
Expected Auxiliary Space: O(n)
