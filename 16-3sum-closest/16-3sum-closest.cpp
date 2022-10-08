class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
         sort(nums.begin(),nums.end());
      long long int ans=INT_MAX;
        for(int i=0;i<nums.size()-2;i++)
        {
            if(i==0 || (i > 0 && nums[i]!=nums[i-1] ))
            {
                int low=i+1,high=nums.size()-1,sum=0-nums[i];
                
                while(low < high)
                {
                    int curr=nums[i]+nums[low]+nums[high];
                  ans=(abs(curr-target) <(abs(ans-target))  ? curr:ans);
                    if(curr > target)
                    {
                        high--;
                    }
                    else if(curr < target)
                    {
                        low++;
                    }
                    else
                    {
                        break;
                    }
                }
                 
            }
        }
        
        return ans;
        
        
    }
};