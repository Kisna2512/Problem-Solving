class Solution
{
public:
    int minScore(int n, vector<vector<int>> &roads)
    {
        unordered_map<int, unordered_map<int, int>> graph;
        for (auto road : roads)
        {
            int u = road[0], v = road[1], w = road[2];
            graph[u][v] = graph[v][u] = w;
        }

        unordered_set<int> vis;
        queue<int> q;
        q.push(1);
        int res = INT_MAX;

        while (!q.empty())
        {
            int node = q.front();
            q.pop();
            for (auto it : graph[node])
            {
                if (!vis.count(it.first))
                {
                    q.push(it.first);
                    vis.insert(it.first);
                }
                res = min(res, it.second);
            }
        }
        return res;
    }
};