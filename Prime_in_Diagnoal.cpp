class Solution
{
public:
    bool check_prime(int n)
    {
        if (n <= 1)
        {
            return false;
        }

        for (int i = 2; i * i <= n; i++)
        {
            if (n % i == 0)
            {
                return false;
            }
        }
        return true;
    }

    int diagonalPrime(vector<vector<int>> &nums)
    {
        int ans = 0;
        int n = nums.size();
        for (int i = 0; i < nums.size(); i++)
        {
            if (check_prime(nums[i][i]))
            {
                ans = max(ans, nums[i][i]);
            }
        }

        for (int i = 0; i < nums.size(); i++)
        {
            if (check_prime(nums[i][n - 1 - i]))
            {
                ans = max(ans, nums[i][n - i - 1]);
            }
        }
        return ans;
    }
};