class Solution
{
public:
    int solve(int i, vector<int> &days, vector<int> &costs, vector<int> &dp)
    {
        if (i >= days.size())
        {
            return 0;
        }

        if (dp[i] != -1)
        {
            return dp[i];
        }

        int mini = INT_MAX;
        mini = min(mini, costs[0] + solve(i + 1, days, costs, dp));

        int d = days[i] + 7, j = i;
        while (j < days.size() && days[j] < d)
        {
            j++;
        }
        mini = min(mini, costs[1] + solve(j, days, costs, dp));

        d = days[i] + 30, j = i;
        while (j < days.size() && days[j] < d)
        {
            j++;
        }
        mini = min(mini, costs[2] + solve(j, days, costs, dp));

        return dp[i] = mini;
    }

    int mincostTickets(vector<int> &days, vector<int> &costs)
    {
        int n = days.size();
        vector<int> dp(n + 1, -1);
        return solve(0, days, costs, dp);
    }
};