Q.Maximum sum of Non-adjacent nodes
link-->https://www.geeksforgeeks.org/problems/maximum-sum-of-non-adjacent-nodes/1
code-->unordered_map<Node * , int>dp;
    int solve(Node * root ){
        if(root==NULL){
            return NULL;
        }
        if(dp[root]){
            return dp[root];
        }
        int pick= root->data;
        if(root->left){
            pick+=  solve(root->left->left ) + solve(root->left->right);
        }
        if(root->right){
            pick += solve(root->right->right) + solve(root->right->left);
        }
        
        int notpick= solve(root->left)+solve(root->right);
        
        return dp[root]= max(pick , notpick);
    }
    int getMaxSum(Node *root) 
    {
        // Add your code here
        return solve(root);
    }
Expected Time Complexity: O(Number of nodes in the tree).
Expected Auxiliary Space: O(Height of the Tree).
