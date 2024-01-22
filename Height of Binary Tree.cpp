link-->https://www.geeksforgeeks.org/problems/height-of-binary-tree/1
Q.Height of Binary Tree
code->
int height(struct Node* node){
        // code here 
        if(node==NULL){
            return 0;
        }
        int left = height(node->left);
        int right= height(node->right);
        return max(left , right)+1;
    }
Expected Time Complexity: O(N)
Expected Auxiliary Space: O(N)
