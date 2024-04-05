Q.Transform to Sum Tree
link-->https://www.geeksforgeeks.org/problems/transform-to-sum-tree/1
code->    int solve(Node * root , int sum){
        if(root==NULL){
            return 0;
        }
        int l = solve(root->left , sum);
        int r= solve( root->right , sum);
        
        sum+=root->data+r+l;
        root->data= l+r;
        return sum;
    }
    void toSumTree(Node *node)
    {
        // Your code here
        int sum=0;
        int a= solve(node , sum);
    }
Expected Time Complexity: O(N)
Expected Auxiliary Space: O(height of tree)
