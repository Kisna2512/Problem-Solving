class Solution {
public:
    int minPairSum(vector<int>& nums) {
        int i=0,j=nums.size()-1;
        int sum=0;
        sort(nums.begin(),nums.end());
        while(i <= j)
        {
            int s=nums[i++]+nums[j--];
            sum=max(sum,s);
        }
        return sum;
    }
};