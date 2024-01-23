link-->https://www.geeksforgeeks.org/problems/postorder-traversal/1
Q.Postorder Traversal
code-->
void post(Node * root , vector<int>&v){
    if(root==NULL){
        return;
    }
    post(root->left , v);
    post(root->right , v);
    v.push_back(root->data);
}
vector <int> postOrder(Node* root)
{
  // Your code here
  vector<int>v;
  post(root , v);
  return v ;
}

Expected Time Complexity: O(N).
Expected Auxiliary Space: O(N).
