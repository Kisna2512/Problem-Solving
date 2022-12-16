class Solution {
public:


   bool solve(int idx,vector<int>& nums,int target,vector<vector<int>> &dp)
   {
         if(target==0)
         {
             return true;
         }
       
          if(idx==0)
          {
              return (target==nums[0]);
          }
     
         if(dp[idx][target]!=-1)
         {
           return dp[idx][target];
         }


        bool a=false;
       if(nums[idx] <= target)
       {
         a=solve(idx-1,nums,target-nums[idx],dp);
       } 
        
        bool b= solve(idx-1,nums,target,dp);

     return dp[idx][target]=(a | b);




   }




    bool canPartition(vector<int>& nums) {
        

          int sum=0;
          for(auto it:nums)
          {
              sum+=it;
          }
          int n=nums.size();
          int target=sum/2;
       vector<vector<int>> dp(n,vector<int>(target+1,-1));
  
   if(sum%2==0)
   {
       
     return solve(n-1,nums,target,dp);
    
   }


   return false;
    

         




    }
};
