class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int ans=INT_MIN;
         int cnt=0;
        for(int i=0;i<nums.size();i++)
        {
           
            if(nums[i]==1)
            {
                cnt++;  
            }else
            {
               ans=max(ans,cnt);
                cnt=0;
            }  
        }
        if(ans<cnt){
            return cnt;
        }
        return ans;  
    }
};
