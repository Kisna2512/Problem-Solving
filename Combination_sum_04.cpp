class Solution {
public:
    // Recursive Solution
    int solve(vector<int>& nums, int target)
    {
        if (target == 0) {
            return 1;
        }

        if (target < 0) {
            return 0;
        }

        int result = 0;

        for (auto it : nums) {
            result += solve(nums, target - it);
        }

        return result;
    }

    // Memoization
    int solve(vector<int>& nums, int target, vector<int>& dp)
    {
        if (target < 0) {
            return 0;
        }

        if (dp[target] != -1) {
            return dp[target];
        }

        if (target == 0) {
            return 1;
        }

        int result = 0;

        for (auto it : nums) {
            result += solve(nums, target - it, dp);
        }

        return dp[target] = result;
        ;
    }

    // tabulation
    int solveTab(vector<int>& nums, int target)
    {
        vector<int> dp(target + 1, 1);
        dp[0] = 1;
        for (int i = 1; i <= target; i++) {
            long long result = 0;
            for (int j = 0; j < nums.size(); j++) {
                if (i >= nums[j]) {
                    result += dp[i - nums[j]];
                }
            }
            dp[i] = result;
        }
        return dp[target];
    }

    // Space Optimisation
    
    int combinationSum4(vector<int>& nums, int target)
    {
        int n = nums.size();
        // vector<int> dp(1000 + 1, -1);
        // return solve(nums,target);
        // return solve(nums,target,dp);
        return solveTab(nums,target);
       
    }
};
