link-->https://www.geeksforgeeks.org/problems/level-order-traversal/1
Q.Level order traversal
Code-->
   vector<int> levelOrder(Node* node)
    {
      //Your code here
      vector<int>v;
      queue<Node*>q;
      q.push(node);
      q.push(NULL);
      while(!q.empty()){
          Node * temp = q.front();
          q.pop();
          if(temp==NULL){
              if(!q.empty()){
                  q.push(NULL);
              }
              
          }
          else{
              v.push_back(temp->data);
              if(temp->left){
                  q.push(temp->left);
              }
              if(temp->right){
                  q.push(temp->right);
              }
          }
      }
      return v;
      
    }
Expected Time Complexity: O(n)
Expected Auxiliary Space: O(n)
  
