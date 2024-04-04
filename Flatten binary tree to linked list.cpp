Q.Flatten binary tree to linked list
link-->https://www.geeksforgeeks.org/problems/flatten-binary-tree-to-linked-list/1?itm_source=geeksforgeeks&itm_medium=article&itm_campaign=bottom_sticky_on_article
code-->Node * prev = NULL;
    void flatten(Node *root)
    {
        //code here
        if(root==NULL){
            return;
        }
        flatten(root->right);
        flatten(root->left);
        root->right= prev;
        root->left=NULL;
        prev= root;
    }
Expected Time Complexity: O(n)
Expected Auxiliary Space: O(1)
