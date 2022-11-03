class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int pre=0;
        int sum=accumulate(nums.begin(),nums.end(),0);
        for(int i=0;i<nums.size();i++)
        {
            sum-=nums[i];
            if(pre==sum)
            {
                return i;
            }
            pre+=nums[i];
        }
        return -1;
    }
};