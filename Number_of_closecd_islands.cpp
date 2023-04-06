class Solution
{
public:
    void bfs(vector<vector<int>> &grid, int i, int j)
    {
        int dx[] = {-1, 0, +1, 0};
        int dy[] = {0, +1, 0, -1};
        int ans = 0;
        int n = grid.size();
        int m = grid[0].size();
        queue<pair<int, int>> q;
        q.push({i, j});
        while (!q.empty())
        {
            int row = q.front().first;
            int col = q.front().second;
            q.pop();

            for (int i = 0; i < 4; i++)
            {
                int nrow = dx[i] + row;
                int ncol = dy[i] + col;
                if (nrow >= 0 && ncol >= 0 && nrow < n && ncol < m && grid[nrow][ncol] == 0)
                {
                    q.push({nrow, ncol});
                    grid[nrow][ncol] = 1;
                }
            }
        }
    }
    int closedIsland(vector<vector<int>> &grid)
    {
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<int>> vis(n, vector<int>(m, 0));
        queue<pair<int, int>> q;

        for (int i = 0; i < n; i++)
        {
            if (grid[i][0] == 0)
            {
                q.push({i, 0});
                bfs(grid, i, 0);
            }
        }
        for (int i = 0; i < n; i++)
        {
            if (grid[i][m - 1] == 0)
            {
                q.push({i, m - 1});
                bfs(grid, i, m - 1);
            }
        }
        for (int i = 0; i < m; i++)
        {
            if (grid[0][i] == 0)
            {
                q.push({0, i});
                bfs(grid, 0, i);
            }
        }

        for (int i = 0; i < m; i++)
        {
            if (grid[n - 1][i] == 0)
            {
                q.push({n - 1, i});
                bfs(grid, n - 1, i);
            }
        }
        int ans = 0;
        for (int i = 1; i < n - 1; i++)
        {
            for (int j = 1; j < m - 1; j++)
            {
                if (!grid[i][j])
                {
                    grid[i][j] = 1;
                    bfs(grid, i, j);
                    ans++;
                }
            }
        }
        return ans;
    }
};
