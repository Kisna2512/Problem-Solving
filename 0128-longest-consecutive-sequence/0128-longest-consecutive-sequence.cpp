class Solution
{
    public:
        int longestConsecutive(vector<int> &nums)
        {

            unordered_set<int> st;

            for (auto it: nums)
            {
                st.insert(it);
            }

            int ans = 0;

            for (int i = 0; i < nums.size(); i++)
            {
                if (st.find(nums[i] - 1) == st.end())
                {
                    int curr = 1;
                    int j = nums[i];

                    while (st.find(j + 1) != st.end())
                    {
                        curr++;
                        j++;
                    }

                    ans = max(ans, curr);
                }
            }

            return ans;
        }
};