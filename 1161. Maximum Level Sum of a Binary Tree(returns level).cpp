Q.1161. Maximum Level Sum of a Binary Tree
link-->https://leetcode.com/problems/maximum-level-sum-of-a-binary-tree/description/
  code->
int solve(TreeNode * root){
        if(root==NULL){
            return 0;
        }
        int ans =1;
        int level=0;
        int maxsum = root->val;

        queue<TreeNode *>q;
        q.push(root);
        while(!q.empty()){
            
           
            int count= q.size();
            int sum=0;
            while(count--){
                TreeNode * temp= q.front();
                q.pop();
                sum += temp->val;
                if(temp->left){
                    q.push(temp->left);
                }
                if(temp->right){
                    q.push(temp->right);
                }
                
            }
            level++;
            if(maxsum<sum){
                maxsum = sum;
                ans = level;
            }
        }
        return ans;
    }
    int maxLevelSum(TreeNode* root) {
        return solve(root);
    }
