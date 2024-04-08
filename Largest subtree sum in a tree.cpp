Q.Largest subtree sum in a tree
link-->https://www.geeksforgeeks.org/problems/largest-subtree-sum-in-a-tree/1
code->int solve(Node * root , int&maxi){
        if(root==NULL){
            return 0;
        }
        int left = solve(root->left ,maxi);
        int right = solve(root->right , maxi);
        maxi= max(left+right+root->data , maxi);
        return left+right+root->data;
    }
    int findLargestSubtreeSum(Node* root)
    {
        //Write your code here
        int maxi = INT_MIN;
        solve(root , maxi);
        return maxi;
    }
Expected Time Complexity: O(N)
Expected Auxiliary Space: O(N)
