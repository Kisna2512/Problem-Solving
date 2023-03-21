class Solution
{
public:
    long long zeroFilledSubarray(vector<int> &nums)
    {
        long long zero = 0, together = 0;

        for (auto it : nums)
        {
            if (it == 0)
            {
                zero++;
                zero += together;
                together++;
            }

            if (it != 0)
            {
                together = 0;
            }
        }
        return zero;
    }
};