Q.Max Level Sum in Binary Tree
link-->https://www.geeksforgeeks.org/problems/max-level-sum-in-binary-tree/1
code->int solve(Node * root){
        if(root==NULL){
            return 0;
        }
        int ans =0;
        int level=0;
        int maxsum = root->data;

        queue<Node *>q;
        q.push(root);
        while(!q.empty()){
            
           
            int count= q.size();
            int sum=0;
            while(count--){
                Node * temp= q.front();
                q.pop();
                sum += temp->data;
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
        return maxsum;
    }
    int maxLevelSum(Node* root) {
        // Your code here
        return solve(root);
    }

Expected Time Complexity: O(N)
Expected Auxiliary Space: O(N)
