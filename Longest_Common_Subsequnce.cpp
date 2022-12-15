class Solution
{
	public:

		int solve(int i, int j, string text1, string text2, vector<vector < int>> &dp)
		{
			if (i >= text1.size() || j >= text2.size())
			{
				return 0;
			}

			if (dp[i][j] != -1)
			{
				return dp[i][j];
			}

			int result = 0;
			if (text1[i] == text2[j])
			{
				dp[i][j] = result = 1 + solve(i + 1, j + 1, text1, text2, dp);
			}
			else
			{
				int lhr = solve(i + 1, j, text1, text2, dp);
				int rhr = solve(i, j + 1, text1, text2, dp);
				return dp[i][j] = max(lhr, rhr);
			}

			return dp[i][j] = result;
		}

	int lcs(string text1, string text2)
	{
		int n = text1.size();
		int m = text2.size();
		vector<vector < int>> dp(n + 1, vector<int> (m + 1, 0));

		for (int i = 1; i < dp.size(); i++)
		{
			for (int j = 1; j < dp[i].size(); j++)
			{
				if (text1[i - 1] == text2[j - 1] && i > 0 && j > 0)
				{
					dp[i][j] = 1 + dp[i - 1][j - 1];
				}
				else
				{
					int lhr = dp[i - 1][j];
					int rhr = dp[i][j - 1];
					dp[i][j] = max(lhr, rhr);
				}
			}
		}

		return dp[dp.size() - 1][dp[0].size() - 1];
	}

	int longestCommonSubsequence(string text1, string text2)
	{
		// int n=text1.size();
		// int m=text2.size();

		// vector<vector < int>> dp(n+1,vector<int>(m+1,-1));
		// return solve(0,0,text1,text2,dp);

		return lcs(text1, text2);
	}
};
