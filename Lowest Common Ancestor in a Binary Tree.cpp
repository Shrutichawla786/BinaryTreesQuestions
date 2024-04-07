Q.Lowest Common Ancestor in a Binary Tree
link-->https://www.geeksforgeeks.org/problems/lowest-common-ancestor-in-a-binary-tree/1
code-->Node * solve(Node * root , int n1 , int n2){
        if(root==NULL || root->data==n1 ||root->data==n2){
            return root;
        }
        Node * left = solve(root->left , n1 , n2);
        Node * right = solve(root->right , n1 , n2);
        
        if(left!=NULL && right !=NULL){
            return root;
        }
        
        else if(left==NULL ){
            return right;
        }
        
        else if(right ==NULL){
            return left;
        }
        
        
    }
    Node* lca(Node* root ,int n1 ,int n2 )
    {
       //Your code here 
       return solve(root , n1 ,n2);
       
    }
Expected Time Complexity:O(N).
Expected Auxiliary Space:O(Height of Tree).
