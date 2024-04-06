Q.Check if all leaves are at same level
link-->https://www.geeksforgeeks.org/problems/leaf-at-same-level/1
code->int ans;
    void solve(Node * root , int h , int & ma){
        if(!root){
            return;
        }
        if(ans==0){
            return;
        }
        if(!root->left && !root->right){
            if(ma==-1){
                ma=h;
            }
            else{
                if(ma!=h){
                    ans=0;
                }
            }
            return;
        }
        solve(root->left , h+1 , ma);
        solve(root->right , h+1 , ma);
    }
    bool check(Node *root)
    {
        //Your code here
        int ma=-1;
        int h=0;
        ans=1;
        solve(root , h , ma);
        return ans;
    }
Expected Time Complexity: O(n)
Expected Auxiliary Space: O(height of tree)
