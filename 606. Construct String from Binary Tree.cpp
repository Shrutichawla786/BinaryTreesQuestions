Q.606. Construct String from Binary Tree
link-->https://leetcode.com/problems/construct-string-from-binary-tree/description/
code-->class Solution {
public:
string solve(TreeNode * root){
    if(root==NULL ){
        return "";
    }
    if(root->left ==NULL && root->right==NULL){
        return to_string(root->val)+"";
    }
    if(root->right==NULL){
        return to_string(root->val)+"("+solve(root->left)+")";
    }
    return to_string(root->val)+"("+solve(root->left)+")"+"("+solve(root->right)+")";
}
    string tree2str(TreeNode* root) {
        return solve(root);
        
    }
};
T.c-->O(N)
S.c-->O(N)
