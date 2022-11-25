class Solution
{
    public:
        vector<int> createTargetArray(vector<int> &nums, vector<int> &index)
        {

            int n = index.size();
            vector<int> tar;

            for (int i = 0; i < n; i++)
            {

                tar.insert(tar.begin() + index[i], nums[i]);
            }

            return tar;
        }
};