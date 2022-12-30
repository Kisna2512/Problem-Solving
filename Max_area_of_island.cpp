class Solution {
public:
    int bfs(vector<vector<int> >& grid, vector<vector<int> >& vis, int i, int j)
    {
        int n = grid.size();
        int m = grid[0].size();
        queue<pair<int, int> > q;
        q.push({ i, j });
        vis[i][j] = 1;

        int drow[] = { -1, 0, +1, 0 };
        int dcol[] = { 0, +1, 0, -1 };

        int cnt = 0;
        while (!q.empty()) {
            int row = q.front().first;
            int col = q.front().second;
            cnt++;

            q.pop();
            for (int i = 0; i < 4; i++) {
                int nrow = drow[i] + row;
                int ncol = dcol[i] + col;
                if (nrow >= 0 && ncol >= 0 && nrow < n && ncol < m && vis[nrow][ncol] == 0 && grid[nrow][ncol] == 1) {
                    q.push({ nrow, ncol });
                    vis[nrow][ncol] = 1;
                }
            }
        }

        return cnt;
    }

    int maxAreaOfIsland(vector<vector<int> >& grid)
    {
        int m = grid.size();
        int n = grid[0].size();

        vector<vector<int> > vis(m, vector<int>(n, 0));
        int cnt = 0;
        for (int i = 0; i < grid.size(); i++) {
            for (int j = 0; j < grid[i].size(); j++) {
                if (grid[i][j] == 1 && !vis[i][j]) {
                    cnt = max(cnt, bfs(grid, vis, i, j));
                }
            }
        }

        return cnt;
    }
};
