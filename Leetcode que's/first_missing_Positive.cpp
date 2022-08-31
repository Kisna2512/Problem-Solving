// Link:https://leetcode.com/problems/first-missing-positive/
//Leetcode Hard
class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
       sort(nums.begin(),nums.end());
        int n=nums.size();
        int low=0;
        int high=n-1;
        int ans=1;
        
        while(low <= high)
        {
            int mid=(low+high)/2;
            if(nums[mid]<=ans)
            {
                if(nums[mid]==ans)
                {
                    ans++;
                    high=n-1;
                }
                low=mid+1;
            }
            else
            {
                high=mid-1;
            }
        }
        return ans;
    
    }
};
