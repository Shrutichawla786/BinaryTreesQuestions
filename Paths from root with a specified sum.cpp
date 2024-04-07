Q.Paths from root with a specified sum
link-->https://www.geeksforgeeks.org/problems/paths-from-root-with-a-specified-sum/1?itm_source=geeksforgeeks&itm_medium=article&itm_campaign=bottom_sticky_on_article
code-->    void helper(Node* root , int sum ,int & res , vector<vector<int>>&ans , vector<int>&sol){
        if(root==NULL){
            return;
        }
        sol.push_back(root->key);
        res+=root->key;
        
        if(sum==res){
            ans.push_back(sol); 
        }
        helper(root->left , sum , res , ans , sol);
        helper(root->right, sum ,res , ans , sol);
        sol.pop_back();
        res-=root->key;
    }
    vector<vector<int>> printPaths(Node *root, int sum)
    {
        //code here
        int res=0;
        vector<vector<int>>ans;
        vector<int>sol;
        helper(root , sum , res , ans , sol);
        return ans;
        
    }
Expected Time Complexity: O(N)
Expected Space Complexity: O(N2)
