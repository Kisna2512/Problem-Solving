class Solution {
public:
    int mod = 1e9 + 7;
    // Memoization
    long solve(int n, vector<int>& dp)
    {
        if (n <= 1) {
            return 1;
        }
        if (n == 2) {
            return 2;
        }
        if (n == 3) {
            return 5;
        }

        if (dp[n] != -1) {
            return dp[n];
        }

        return ((2 * (solve(n - 1, dp)) + solve(n - 3, dp))) % mod;
    }

    // Tabulation
    int solveTab(int n)
    {
        vector<long> dp(n + 3, 0);
        dp[0] = 1;
        dp[1] = 1;
        dp[2] = 2;
        dp[3] = 5;

        for (int i = 3; i <= n; i++) {
            dp[i] = (2 * ((dp[i - 1]) % mod) + dp[i - 3]);
        }

        return (dp[n]) % mod;
    }

    // Space Optimization
    int solveUsingSpaceOptimisation(int n)
    {
        if (n <= 1) {
            return 1;
        }
        if (n == 2) {
            return 2;
        }
        long prev1 = 2;
        long prev2 = 1;
        long prev3 = 1;
        long curr = 0;
        for (int i = 3; i <= n; i++) {

            curr = (2 * ((prev1) % mod) + prev3);
            prev3 = prev2;
            prev2 = prev1;
            prev1 = curr;
        }

        return (curr % mod);
    }

    int numTilings(int n)
    {
        // vector<int> dp(n+1,-1);
        // return solve(n,dp);
        return solveUsingSpaceOptimisation(n);
    }
};
