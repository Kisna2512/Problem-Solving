class Solution
{

    private:

        void dfs(vector<int> adj[], vector<int> &vis, int node)
        {

            vis[node] = 1;

            for (auto it: adj[node])
            {
                if (!vis[it])
                {
                    dfs(adj, vis, it);
                }
            }
        }
    public:
        int findCircleNum(vector<vector < int>> &isConnected)
        {
            int V = isConnected.size();
            vector<int> adj[V];
            for (int i = 0; i < V; i++)
            {
                for (int j = 0; j < V; j++)
                {
                    if (isConnected[i][j] == 1 && i != j)
                    {
                        adj[i].push_back(j);
                        adj[j].push_back(i);
                    }
                }
            }

            int cnt = 0;
            vector<int> vis(V,0);

            for (int i = 0; i < V; i++)
            {
                if (vis[i] == 0)
                {
                    cnt++;
                    dfs(adj, vis, i);
                }
            }
            return cnt;
        }
};