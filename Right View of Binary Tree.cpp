link-->https://www.geeksforgeeks.org/problems/right-view-of-binary-tree/1
Q.Right View of Binary Tree
code-->
  void right(Node* root , vector<int>&v , int level){
        if(root==NULL){
            return;
        }
        if(level == v.size()){
            v.push_back(root->data);
        }
        right(root->right , v , level+1);
        right(root->left , v , level+1);
    }
    
    vector<int> rightView(Node *root)
    {
       // Your Code here
       vector<int> v;
       right(root , v , 0);
       return v;
    }
Expected Time Complexity: O(N).
Expected Auxiliary Space: O(Height of the Tree).
