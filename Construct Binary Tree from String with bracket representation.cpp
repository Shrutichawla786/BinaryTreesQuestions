Q.Construct Binary Tree from String with bracket representation
link-->https://www.geeksforgeeks.org/problems/construct-binary-tree-from-string-with-bracket-representation/1
code->int i=0;
    void solve(Node * &root , string s){
        if(i<s.size() && isdigit(s[i])){
            int sum=0;
            while(i<s.size() && isdigit(s[i])){
                sum=sum*10;
                sum=sum+s[i]-'0';
                i++;
            }
            if(sum>0){
                root->data= sum;
            }
           
        }
        if(i<s.size() && s[i]=='('){
            if(s[i+1] == ')'){
                root->left = NULL;
                i = i+2;
            }
            else{
                root->left= new Node(NULL);
                i++;
                solve(root->left , s);
            }
            
        }
        if(i<s.size() && s[i]=='('){
            if(s[i+1] == ')'){
                root->right = NULL;
                i = i+2;
            }
            else{
                root->right= new Node(NULL);
                i++;
                solve(root->right , s);
            }
            
        }
        if(i>=s.size() ||s[i]==')'){
            i++;
            return ;
        }
    }
    Node *treeFromString(string str){
        // code here
        if(str == "") return NULL;
        int n = str.size();
        Node * root= new Node(NULL);
        solve(root , str);
        return root;
        
    }
Expected Time Complexity: O(N)
Expected Auxiliary Space: O(N)
