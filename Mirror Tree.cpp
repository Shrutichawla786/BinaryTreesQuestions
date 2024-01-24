link-->Mirror Tree
Q.Mirror Tree
code->

void mirror(Node* node) {
        // code here
        if(node==NULL){
            return;
        }
        mirror(node->left);
        mirror(node->right);
        
        Node * temp;
        temp= node->left;
        node->left = node->right;
        node->right = temp;
    }
Expected Time Complexity: O(N).
Expected Auxiliary Space: O(Height of the Tree).
