class Solution {
public:
    
    
    int fun(int i,int left,int right,vector<int> &nums,vector<int> &multipliers,vector<vector<int>> &dp)
    {
       
         if(i==multipliers.size())
         {
             return 0;
         }
        if(dp[i][left]!=INT_MIN)
        {
            return dp[i][left];
        }
        int l=multipliers[i]*nums[left]+fun(i+1,left+1,right,nums,multipliers,dp);
        int r=multipliers[i]*nums[right]+fun(i+1,left,right-1,nums,multipliers,dp);
    
        
        
        return dp[i][left]=max(l,r);
        
        
    }
    
    int maximumScore(vector<int>& nums, vector<int>& multipliers) {
       vector<vector<int>> dp(multipliers.size()+1,vector<int> (multipliers.size()+1,INT_MIN));
     return fun(0,0,nums.size()-1,nums,multipliers,dp) ;
        
    }
};
