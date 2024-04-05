Q.Sum Tree
link-->https://www.geeksforgeeks.org/problems/sum-tree/1
code-> int sum(Node * root){
        if(root==NULL){
            return 0;
        }
        return root->data+sum(root->left)+sum(root->right);
    }
    bool isSumTree(Node* root)
    {
         // Your code here
         if(root==NULL||(root->left==NULL && root->right==NULL)){
             return true;
         }
         int leftsum = sum(root->left);
         int rightsum= sum(root->right);
         return (root->data== leftsum+rightsum)&& isSumTree(root->left) && isSumTree(root->right);
    
    }

Expected Time Complexity: O(N)
Expected Auxiliary Space: O(Height of the Tree)
