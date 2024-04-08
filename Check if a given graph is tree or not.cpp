Q.Check if a given graph is tree or not
link-->https://www.geeksforgeeks.org/problems/is-it-a-tree/1
code->bool isCyclic(int node, int parent, vector<int> graph[], vector<int>& visited) {
        visited[node] = 1;
        for(auto nbr: graph[node]) {
            if(!visited[nbr]) {
                if(isCyclic(nbr, node, graph, visited)) return true;
            }
            else if(nbr != parent)   return true; // nbr is visited except parent
        }
        return false;
    }
  
    int isTree(int n, int m, vector<vector<int>> &adj) {
        vector<int> graph[n], visited(n, 0);
        for(auto &v: adj) {
            graph[v[0]].push_back(v[1]);
            graph[v[1]].push_back(v[0]);
        }
        int components = 0; // connected-component
        for(int i = 0; i < n; ++i) {
            if(!visited[i]) {
                components++;
                if(isCyclic(i, -1, graph, visited))  return false;
            }
        }
        return (components == 1);
    }
Expected Time Complexity: O(N+M)
Expected Auxiliary Space: O(N)
