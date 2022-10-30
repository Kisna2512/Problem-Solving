class Solution
{

    public:

        void bfs(int row, int col, vector<vector < char>> &grid, vector< vector< int>> &vis)
        {
            int dx[] = { -1,
                0,
                1,
                0
            };
            int dy[] = { 0,
                1,
                0,
                -1
            };
            vis[row][col] = 1;
            queue<pair<int, int>> q;
            q.push({ row,
                col });

            while (!q.empty())
            {
                int rowii = q.front().first;
                int colii = q.front().second;
                q.pop();

                for (int i = 0; i < 4; i++)
                {
                    int rowi = rowii + dx[i];
                    int coli = colii + dy[i];
                    if (rowi >= 0 && coli >= 0 && rowi < grid.size() && coli < grid[0].size() && grid[rowi][coli] == '1' && !vis[rowi][coli])
                    {
                        vis[rowi][coli] = 1;
                        q.push({ rowi,
                            coli });
                    }
                }
            }
            
            
        }
                int numIslands(vector<vector < char>> &grid)
                {

                    int n = grid.size();
                    int m = grid[0].size();
                   	// create visited array and initialise to 0
                    vector<vector < int>> vis(n, vector<int> (m, 0));
                    int cnt = 0;
                    for (int row = 0; row < n; row++)
                    {
                        for (int col = 0; col < m; col++)
                        {
                           	// if not visited and is a land
                            if (!vis[row][col] && grid[row][col] == '1')
                            {
                                cnt++;
                                bfs(row, col, grid, vis);
                            }
                        }
                    }
                    return cnt;
                }
            };