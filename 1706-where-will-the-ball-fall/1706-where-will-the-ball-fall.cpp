class Solution
{
    public:
        vector<int> findBall(vector<vector < int>> &grid)
        {

            int n = grid.size();
            int m = grid[0].size();

            queue<pair<pair<int, int>, int>> q;
            vector<int> ans(m, -1);

            for (int i = 0; i < m; i++)
            {
                q.push({
		{
                        0,
                        i
                    },
                    i });
            }

            while (!q.empty())
            {
                int row = q.front().first.first;
                int col = q.front().first.second;
                int ball = q.front().second;
               q.pop();
                if (row == n)
                {
                    ans[ball] = col;
                    continue;
                }
             if (grid[row][col] == 1)
                {
                    if (col + 1 < m && grid[row][col + 1] == 1)
                    {
                        q.push({
		{
                                row + 1, col + 1
                            },
                            ball });
                    }
                }
                else
                {
                    if (col - 1 >= 0 && grid[row][col - 1] == -1)
                    {
                        q.push({
		{
                                row + 1, col - 1
                            },
                            ball });
                    }
                }
            }

            return ans;
        }
};