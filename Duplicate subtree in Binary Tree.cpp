Q.Duplicate subtree in Binary Tree
link-->https://www.geeksforgeeks.org/problems/duplicate-subtree-in-binary-tree/1
code--> unordered_map<string , int>m;
    string solve(Node * root){
        if(root==NULL){
            return "$";
        }
        string s= "";
        if(!root->left && !root->right){
            s= to_string(root->data);
            return s;
        }
        s = solve(root->left) + ',' 
            + solve(root->right) + ',' + to_string(root->data);
        m[s]++;
        return s;
    }
    int dupSub(Node *root) {
         // code here
         m.clear();
         solve(root);
         for(auto x:m){
             if(x.second>=2){
                 return true;
             }
             
         }
         return false;
    }
Expected Time Complexity: O(N)
Expected Space Complexity: O(N)
