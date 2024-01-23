link-->https://www.geeksforgeeks.org/problems/top-view-of-binary-tree/1
Q.Top View of Binary Tree
code-->
  void top(Node *root , vector<int>&v){
        if(root==NULL){
            return;
        }
        queue<pair<Node* , int>>q;
        map<int , int>m;
        q.push({root , 0});
        while(!q.empty()){
            auto it = q.front();
            q.pop();
            Node * node = it.first;
            int line= it.second;
            if(m.find(line)== m.end()){
                m[line]=node->data;
            }
            if(node->left !=NULL){
                q.push({node->left , line-1});
            }
            if(node->right !=NULL){
                q.push({node->right ,line+1});
            }
        }
        for(auto it:m){
            v.push_back(it.second);
        }
    }
    vector<int> topView(Node *root)
    {
        //Your code here
        vector<int>v;
        top( root , v);
        return v;
        
    }
Expected Time Complexity: O(NlogN)
Expected Auxiliary Space: O(N)
