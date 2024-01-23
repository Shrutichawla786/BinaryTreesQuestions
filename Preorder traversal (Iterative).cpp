link-->htps://www.geeksforgeeks.org/problems/preorder-traversal-iterative/1
Q.Preorder traversal (Iterative)
Code-->void pre(Node * root , vector<int>&v){
        stack<Node *>s;
        s.push(root);
        while(!s.empty()){
            root = s.top();
            s.pop();
            v.push_back(root->data);
            if(root->right !=NULL){
                s.push(root->right);
            }
            if(root->left!=NULL){
                s.push(root->left);
            }
        }
    }
    vector<int> preOrder(Node* root)
    {
        //code here
        vector<int>v;
        pre(root , v);
        return  v;
        
    }
Expected time complexity: O(N)
Expected auxiliary space: O(N)
