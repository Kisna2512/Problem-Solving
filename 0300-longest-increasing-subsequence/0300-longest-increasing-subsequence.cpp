class Solution
{
    public:

        int solve(vector<int> &nums, int curr, int prev)
        {
            if (curr == nums.size())
            {
                return 0;
            }

           	// take
            int take = 0;
            if (prev == -1 || nums[prev] < nums[curr])
            {
                take = 1 + solve(nums, curr + 1, curr);
            }

           	// not take

            int nottake = 0;

            nottake = 0 + solve(nums, curr + 1, prev);

            return max(take, nottake);
        }

    int solve(vector<int> &nums, int curr, int prev, vector<vector< int>> &dp)
    {
        if (curr == nums.size())
        {
            return 0;
        }

        if (dp[curr][prev + 1] != -1)
        {
            return dp[curr][prev + 1];
        }

       	// take
        int take = 0;
        if (prev == -1 || nums[prev] < nums[curr])
        {
            take = 1 + solve(nums, curr + 1, curr, dp);
        }

       	// not take

        int nottake = 0;

        nottake = 0 + solve(nums, curr + 1, prev, dp);

        return dp[curr][prev + 1] = max(take, nottake);
    }
    
    
    int solveTab(vector<int> &nums)
    {
        
        vector<vector< int>> dp(nums.size()+1, vector<int> (nums.size() + 1, 0));
        
        
        for(int cur=nums.size()-1;cur >= 0;cur--)
        {
            
            for(int prev=cur-1; prev >= -1;prev--)
            {
                 int take = 0;
                 int nottake = 0;
                
            if (prev == -1 || nums[prev] < nums[cur])
            {
                take = 1 + dp[cur+1][cur+1];
            }

       

            nottake = 0 + dp[cur+1][prev+1];
                 dp[cur][prev+1]=max(take,nottake);
            }
           
        }
        
       return dp[0][0];  
    }
    

    int lengthOfLIS(vector<int> &nums)
    {
       	// return solve(nums,0,-1);

        // vector<vector < int>> dp(nums.size(), vector<int> (nums.size() + 1, -1));

        // return solve(nums, 0, -1, dp);
        return solveTab(nums);
    }
};