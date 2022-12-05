class Solution
{
    public:

        bool solve(string s1, string s2, string s3, vector<vector < int>> &dp, int n, int m, int len)
        {
            if (len == 0)
            {
                return 1;
            }

            if (dp[n][m] != -1)
            {
                return dp[n][m];
            }

            int a = 0, b = 0;

            if (n - 1 >= 0 && s1[n - 1] == s3[len - 1])
            {
                a = solve(s1, s2, s3, dp, n - 1, m, len - 1);
            }

            if (m - 1 >= 0 && s2[m - 1] == s3[len - 1])
            {
                b = solve(s1, s2, s3, dp, n, m - 1, len - 1);
            }

            return dp[n][m] = (a or b);
        }

    bool isInterleave(string s1, string s2, string s3)
    {

        int n = s1.size();
        int m = s2.size();

        int len = s3.size();

        if (n + m != len)
        {
            return 0;
        }

        vector<vector < int>> dp(n + 1, vector<int> (m + 1, -1));

        return solve(s1, s2, s3, dp, n, m, len);
    }
};