Link-->https://www.geeksforgeeks.org/problems/inorder-traversal/1
Q.Inorder Traversal
code-->void in(Node * root , vector<int>&v ){
        if(root==NULL){
            return;
        }
        in(root->left , v);
        v.push_back(root->data);
        in(root->right ,v);
    }
    vector<int> inOrder(Node* root) {
        // Your code here
        vector<int>v;
        in(root , v);
        return v;
    }

Expected Time Complexity: O(N).
Expected Auxiliary Space: O(N).
