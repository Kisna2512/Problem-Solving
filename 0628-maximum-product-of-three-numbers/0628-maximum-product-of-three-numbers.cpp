class Solution
{

    public:
        int maximumProduct(vector<int> &nums)
        {

           	sort(nums.begin(),nums.end());
            int e = nums.size();
            int sM = (nums[e - 1] *nums[0] *nums[1]);
            int lM = (nums[e - 3] *nums[e - 1] *nums[e - 2]);
            return max(sM, lM);
        }
};