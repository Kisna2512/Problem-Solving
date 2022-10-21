class Solution
{
    public:
        int directions[4][2] = {
		    {-1,0 },
            { 1,0 },
            { 0,-1},
            { 0,1 }
        };
    void bfs(int i, int j, vector<vector < bool>> &vis, vector< vector< char>> &grid)
    {
        int n = grid.size();
        int m = grid[0].size();
        queue<pair<int, int>> q;
        q.push({ i,
            j });

        vis[i][j] = true;
        while (!q.empty())
        {
            pair<int, int> p = q.front();
            q.pop();
            for (auto it: directions)
            {
                int row = p.first + it[0];
                int col = p.second + it[1];

                if (row < 0 || col < 0 || row >= n || col >= m || vis[row][col] == true || grid[row][col] == '0')
                {
                    continue;
                }

                vis[row][col] = true;
                q.push({ row,
                    col });
            }
        }
    }

    int numIslands(vector<vector < char>> &grid)
    {

        int n = grid.size();
        int m = grid[0].size();
        vector<vector < bool>> vis(n, vector<bool> (m, false));

        int cnt = 0;

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (!vis[i][j] && grid[i][j] == '1')
                {
                    cnt++;
                    bfs(i, j, vis, grid);
                }
            }
        }

        return cnt;
    }
};