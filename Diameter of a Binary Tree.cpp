link-->https://www.geeksforgeeks.org/problems/diameter-of-binary-tree/1
Q.Diameter of a Binary Tree
code-->pair<int , int>diameterFast(Node * root){
        if(root==NULL){
            pair<int , int>p =make_pair(0,0);
            return p;
        }
        pair<int , int> left = diameterFast(root->left);
        pair<int , int>right = diameterFast(root->right);
        int op1 = left.first;
        int op2= right.first;
        int op3= left.second+right.second+1;
        
        pair<int , int> ans;
        ans.first=max(op1 , (op2 , op3));
        ans.second= max(left.second,right.second)+1;
        return ans;
    }
    int diameter(Node* root) {
        // Your code here
        return diameterFast(root).first;
    }
  

Expected Time Complexity: O(N).
Expected Auxiliary Space: O(Height of the Tree).
