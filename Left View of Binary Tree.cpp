link-->https://www.geeksforgeeks.org/problems/left-view-of-binary-tree/1
Q.Left View of Binary Tree
code-->
  void left(Node * root , vector<int>&v , int level){

    if(root==NULL){
        return ;
    }
    if(level == v.size()){
        v.push_back(root->data);
    }
    left(root->left , v , level+1);
    left(root->right , v ,level+1);
}
vector<int> leftView(Node *root)
{
   // Your code here
   vector<int>v;
   left(root , v , 0);
   return v;
}
Expected Time Complexity: O(N).
Expected Auxiliary Space: O(N).
