class Solution
{
    public:

        long long maximumSubarraySum(vector<int> &nums, int k)
        {

            long long maxi = 0;

            set<int> st;
            long long sum = 0;
            int j = 0;
            for (int i = 0; i < nums.size(); i++)
            {
                sum += nums[i];
                if (st.find(nums[i]) != st.end())
                {
                    j = i;
                    sum = nums[i];
                    st.clear();
                }
                if ((i- j + 1) == k)
                {
                    maxi = max(maxi, sum);
                    st.erase(nums[j]);
                    sum -= nums[j++];
                }

                st.insert(nums[i]);
            }

            return maxi;
        }
};