class Solution
{
    public:

        int solve(string & s, int i, int j, vector<vector < int>> &dp)
        {

            if (i == j)
            {
                return 1;
            }
            else if (i > j)
            {
                return 0;
            }

            if (dp[i][j] != -1)
            {
                return dp[i][j];
            }

            if (s[i] == s[j])
            {
                dp[i][j]= 2 + solve(s, i + 1, j - 1, dp);
            }
            else
            {
                 dp[i][j] = max(solve(s, i + 1, j, dp), solve(s, i, j - 1, dp));
            }
           
            
            return dp[i][j];
        }

    int longestPalindromeSubseq(string s)
    {
        int n = s.size();
        vector<vector < int>> dp(n, vector<int> (n, -1));
        return solve(s, 0, s.size() - 1, dp);
    }
};