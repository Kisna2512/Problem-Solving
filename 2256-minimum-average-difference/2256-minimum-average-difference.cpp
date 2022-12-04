class Solution
{
    public:
        int minimumAverageDifference(vector<int> &nums)
        {

            long long sum = 0;

            for (auto it: nums)
            {
                sum = sum + (long) it;
            }

            long long ans = LLONG_MAX;

            long long j = 0;

            long long cur_sum = 0;

            for (int i = 0; i < nums.size(); i++)
            {
                cur_sum = cur_sum + (long long) nums[i];
                long long left = 0, right = 0;
                left = (cur_sum) /(i + 1);
                if (i < nums.size() - 1)
                {
                    right = (sum - cur_sum) / (nums.size() - i - 1);
                }
                int diff = abs(left - right);

                if (ans > diff)
                {
                    ans = diff;
                    j = i;
                }
            }

            return j;
        }
};