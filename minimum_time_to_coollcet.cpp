class Solution {
public:

     int edge = 0;

    bool dfs(vector<int> adj[], int node, int parent, vector<bool> &hasApple) {

       
        bool valid_path = 0;

     
        for(auto &nbr : adj[node]) {
            if(nbr == parent) continue;

            bool found = dfs(adj, nbr, node, hasApple);
            if(found) edge++;
            if(found) valid_path = 1;

        }
        
        if(valid_path || hasApple[node]) return 1;
        else return 0;
    }


    int minTime(int n, vector<vector<int>>& edges, vector<bool>& hasApple) {
        vector<int> adj[n];
        for(int i = 0; i < edges.size(); i++) {
            int u = edges[i][0];
            int v = edges[i][1];
            adj[u].push_back(v);
            adj[v].push_back(u);
        }

       
        dfs(adj, 0, -1, hasApple);

       
        return 2 * edge;
    }
};
