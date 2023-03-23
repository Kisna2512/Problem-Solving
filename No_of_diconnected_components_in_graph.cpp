class Solution
{
public:
    int makeConnected(int n, vector<vector<int>> &connections)
    {
        if (connections.size() < n - 1)
        {
            return -1;
        }
        vector<vector<int>> graph(n);
        vector<int> vis(n, 0);
        for (auto it : connections)
        {
            graph[it[0]].push_back(it[1]);
            graph[it[1]].push_back(it[0]);
        }
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            if (vis[i] == 0)
            {
                vis[i] = 1;
                queue<int> q;
                q.push(i);
                ans++;
                while (!q.empty())
                {
                    int node = q.front();
                    q.pop();
                    vis[node] = 1;
                    for (auto it : graph[node])
                    {
                        if (vis[it] == 0)
                        {
                            q.push(it);
                            vis[it] = 1;
                        }
                    }
                }
            }
        }
        return (ans - 1);
    }
};