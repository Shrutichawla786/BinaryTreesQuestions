link-->https://www.geeksforgeeks.org/problems/reverse-level-order-traversal/1
Q.Reverse Level Order Traversal
code-->
  
vector<int> reverseLevelOrder(Node *root)
{
    // code here
    vector<int> ans;
      queue<Node*>q;
      q.push(root);
      while(!q.empty()){
          Node* temp=q.front();
          q.pop();
          ans.push_back(temp->data);
          
          if(temp->right){
              q.push(temp->right);
          }
          if(temp->left){
              q.push(temp->left);
          }
      }
      reverse(ans.begin(),ans.end());
      return ans;
}
Expected Time Complexity: O(N)
Expected Auxiliary Space: O(N)
