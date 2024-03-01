  Q.Boundary Traversal of binary tree
link-->https://www.geeksforgeeks.org/problems/boundary-traversal-of-binary-tree/1
code-->    void leftNode(Node * root , vector<int>&ans){
        if(root==NULL){
            return;
        }
        if(root->left){
            ans.push_back(root->data);
            leftNode(root->left , ans);
        }
        else if(root->right){
            ans.push_back(root->data);
            leftNode(root->right , ans);
        }
    }
    void leaf(Node * root , vector<int>&ans){
        if(root==NULL){
            return;
        }
        leaf(root->left , ans);
        if(!root->left && !root->right){
            ans.push_back(root->data);
        }
        leaf(root->right , ans);
        
    }
    void rightNode(Node* root , vector<int>&ans ){
        if(root==NULL){
            return;
        }
        if(root->right){
            rightNode(root->right , ans);
            ans.push_back(root->data);
        }
        else if(root->left){
            rightNode(root->left , ans);
            ans.push_back(root->data);
        }
        
    }
    vector <int> boundary(Node *root)
    {
        //Your code here
        vector<int >ans;

        ans.push_back(root->data);
        if(root->left ==NULL && root->right==NULL){
            return ans;
        }
        leftNode(root->left , ans);
        leaf(root , ans);
        rightNode(root->right , ans);
        return ans;
    }
Expected Time Complexity: O(N). 
Expected Auxiliary Space: O(Height of the Tree).
