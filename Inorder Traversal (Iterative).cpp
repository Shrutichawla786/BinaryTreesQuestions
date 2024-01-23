link-->https://www.geeksforgeeks.org/problems/inorder-traversal-iterative/1
Q.Inorder Traversal (Iterative)
code->void in(Node * root , vector<int>&v){
    stack<Node *>s;
    while(true){
        if(root !=NULL){
            s.push(root);
            root=root->left;
        }
        else{
            if(s.empty()==true){
                return;
            }
            root= s.top();
            s.pop();
            v.push_back(root->data);
            root=root->right;
        }
    }

}
    vector<int> inOrder(Node* root)
    {
        //code here
        vector<int>v;
        in(root , v);
        return v;
    }

Expected time complexity: O(N)
Expected auxiliary space: O(N)
  
