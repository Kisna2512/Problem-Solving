class Solution
{
    public:
        int hIndex(vector<int> &nums)
        {
            sort(nums.begin(), nums.end());
            int n = nums.size();

            int low = 0;
            int high = n - 1;

            while (low <= high)
            {
                int mid = low + (high - low) / 2;
                if (nums[mid] == (n - mid))
                {
                    return nums[mid];
                }
                else if (nums[mid] > (n - mid))
                {
                    high = mid - 1;
                }
                else
                {
                    low = mid + 1;
                }
            }

            return n - low;
        }
};