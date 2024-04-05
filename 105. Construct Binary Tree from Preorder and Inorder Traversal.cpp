Q.105. Construct Binary Tree from Preorder and Inorder Traversal
link-->https://leetcode.com/problems/construct-binary-tree-from-preorder-and-inorder-traversal/description/
code-->TreeNode * solve(vector<int>&pre , int preStart , int preEnd , vector<int>&in , int inStart , int inEnd , map<int , int>&inMap ){
        if(preStart>preEnd || inStart>inEnd){
            return NULL;
        }
        TreeNode * root = new TreeNode ( pre[preStart]);
        int inRoot= inMap[root->val];
        int numsleft = inRoot-inStart;
        root->left= solve(pre , preStart+1 , preStart+numsleft , in , inStart , inRoot-1,inMap);
        root->right = solve(pre , preStart+numsleft+1 ,preEnd , in, inRoot+1 , inEnd , inMap);
        return root;
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        map<int , int>inMap;
        for(int i=0;i<inorder.size();i++){
            inMap[inorder[i]]=i;
        }
        TreeNode * root = solve(preorder , 0 , preorder.size()-1 , inorder , 0 , inorder.size()-1 , inMap);
        return root;
        
    }
T.c-->O(n)
  s.c-->O(N*N)
