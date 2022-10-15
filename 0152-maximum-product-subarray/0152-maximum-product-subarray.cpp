class Solution
{
    public:
        int maxProduct(vector<int> &nums)
        {

            int pro = 1;
            int bpro = 1;
            int maxi = INT_MIN;

            for (int i = 0; i < nums.size(); i++)
            {
                pro *= nums[i];
                bpro *= nums[nums.size() - 1 - i];

                maxi = max(maxi, max(pro, bpro));
                if (pro == 0)
                {
                    pro = 1;
                }

                if (bpro == 0)
                {
                    bpro = 1;
                }
            }

            return maxi;
        }
};