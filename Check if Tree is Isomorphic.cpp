Q.Check if Tree is Isomorphic
link-->https://www.geeksforgeeks.org/problems/check-if-tree-is-isomorphic/1
code-> bool isIsomorphic(Node *root1,Node *root2)
    {
    //add code here.
        if(!root1 && !root2){
            return true;
        }
        if(!root1 || !root2){
            return false;
        }
        if(root1->data != root2->data){
            return false;
        }
        bool a = isIsomorphic(root1->left , root2->left) && isIsomorphic(root1->right , root2->right);
        bool b = isIsomorphic(root1->left , root2->right) && isIsomorphic(root1->right , root2->left);
        return a||b;
    }
Expected Time Complexity: O(min(M, N)) where M and N are the sizes of the two trees.
Expected Auxiliary Space: O(min(H1, H2)) where H1 and H2 are the heights of the two trees.
