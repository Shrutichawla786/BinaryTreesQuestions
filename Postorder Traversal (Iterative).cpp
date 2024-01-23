link-->https://www.geeksforgeeks.org/problems/postorder-traversal-iterative/1
Q.Postorder Traversal (Iterative)
code-->
  
 void post(Node * root , vector<int>&v){
        stack<Node *>s;
        while(root!=NULL || !s.empty()){
            if(root!=NULL){
                s.push(root);
                root=root->left;
            }
            else{
                Node * temp = s.top()->right;
                if(temp==NULL){
                    temp = s.top();
                    s.pop();
                    v.push_back(temp->data);
                    
                    while(!s.empty() && temp == s.top()->right){
                        temp = s.top();
                        s.pop();
                        v.push_back(temp->data);
                    }
                    
                }
                else{
                    root=temp ;
                }
            }
        }
    }
    vector<int> postOrder(Node* node) {
        // code here
        vector<int>v;
        post(node , v);
        return v;
    }
Expected time complexity: O(N)
Expected auxiliary space: O(N)
