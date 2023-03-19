class Solution
{
public:
    bool checkValidGrid(vector<vector<int>> &grid)
    {
        if (grid[0][0] != 0)
        {
            return false;
        }
        int n = grid.size();
        vector<vector<int>> vis(n, vector<int>(n, 0));
        queue<pair<int, int>> q;
        q.push({0, 0});
        vis[0][0] = 1;
        int dx[] = {2, 1, -1, -2, -2, -1, 1, 2};
        int dy[] = {1, 2, 2, 1, -1, -2, -2, -1};

        while (!q.empty())
        {
            int row = q.front().first;
            int col = q.front().second;
            q.pop();
            int start = grid[row][col];
            if (start == n * n - 1)
            {
                return true;
            }

            for (int i = 0; i < 8; i++)
            {
                int nrow = dx[i] + row;
                int ncol = dy[i] + col;
                if (nrow >= 0 && nrow < n && ncol >= 0 && ncol < n && vis[nrow][ncol] == 0 && start + 1 == grid[nrow][ncol])
                {

                    start = grid[nrow][ncol];
                    q.push({nrow, ncol});
                    vis[nrow][ncol] = 1;
                }
            }
        }
        return false;
    }
};