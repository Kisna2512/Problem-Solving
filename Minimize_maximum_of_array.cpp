class Solution
{
public:
    int minimizeArrayValue(vector<int> &nums)
    {
        long long maxi = 0;
        long long sum = 0;

        for (int i = 0; i < nums.size(); i++)
        {
            sum += (nums[i]);
            long long ans = (sum + i) / (i + 1);
            maxi = max(maxi, ans);
        }

        return maxi;
    }
};