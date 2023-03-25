class Solution
{
public:
    long long countPairs(int n, vector<vector<int>> &edges)
    {
        vector<vector<int>> graph(n);
        for (auto it : edges)
        {
            graph[it[0]].push_back(it[1]);
            graph[it[1]].push_back(it[0]);
        }
        vector<int> vis(n, 0);
        vector<int> ans;
        for (int i = 0; i < n; i++)
        {
            if (!vis[i])
            {
                vis[i] = 1;
                queue<int> q;
                q.push(i);
                long long x = 1;
                while (!q.empty())
                {
                    int node = q.front();
                    q.pop();
                    for (auto it : graph[node])
                    {
                        if (!vis[it])
                        {
                            x++;
                            q.push(it);
                            vis[it] = 1;
                        }
                    }
                }

                ans.push_back(x);
            }
        }
        long long cnt = 0, res = 0;
        for (int i = 0; i < ans.size(); i++)
        {
            cnt += ans[i];
            res += (ans[i] * (n - cnt));
        }
        return res;
    }
};