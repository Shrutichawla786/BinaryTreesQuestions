Q.Minimum swap required to convert binary tree to binary search tree
link-->https://www.geeksforgeeks.org/problems/minimum-swap-required-to-convert-binary-tree-to-binary-search-tree/0?page=1&sortBy=newest&query=page1sortBynewest
codee-->int countways(vector<pair<int , int>>&sortedpairs , int&n){
      int swaps=0;
      int i=0;
      while(i<n){
          pair<int , int>temp = sortedpairs[i];
          if(temp.second!=i){
              swaps++;
              swap(sortedpairs[i] , sortedpairs[temp.second]);
          }
          else{
              i++;
          }
      }
      return swaps;
      
  }
  void getInorder(vector<int> &arr, int index, int &n, vector<int> &Inorder){
        if(index >= n){
            return;
        }
        
        int leftChild = 2*index + 1;
        int rightChild = 2*index + 2;
        
        getInorder(arr, leftChild, n, Inorder);
        Inorder.push_back(arr[index]);
        getInorder(arr, rightChild, n, Inorder);
        
        return;
    }
    
    int minSwaps(vector<int>&A, int n){
        //Write your code here
        vector<int>Inorder;
        getInorder(A , 0 , n , Inorder);
        vector<pair<int ,int>>sortedpairs;
        for(int i=0;i<n;i++){
            sortedpairs.push_back({Inorder[i] , i});
        }
        sort(begin(sortedpairs) , end(sortedpairs));
        return countways(sortedpairs , n);
        
        
    }


Expected Time Complexity: O(NlogN)
Expected Auxiliary Space: O(N)
