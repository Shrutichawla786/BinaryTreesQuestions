Q.Diagonal Traversal of Binary Tree
link-->https://www.geeksforgeeks.org/problems/diagonal-traversal-of-binary-tree/1
code-->
vector<int> diagonal(Node *root)
{
   // your code here
   vector<int>ans;
   queue<Node*>q;
   if(root==NULL){
       return ans;
   }
   q.push(root);
   while(!q.empty()){
       Node * temp =q.front();
       q.pop();
       while(temp){
           if(temp->left){
               q.push(temp->left);
           }
            ans.push_back(temp->data);
            temp=temp->right;
       }
      
   }
   return ans;

}

Expected Time Complexity: O(N).
Expected Auxiliary Space: O(N).
