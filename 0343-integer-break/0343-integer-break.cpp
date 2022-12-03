class Solution
{
    public:
        int integerBreak(int n)
        {

            if (n == 2)
            {
                return 1;
            }
            else if (n == 3)
            {
                return 2;
            }
            else if (n == 4)
            {
                return 4;
            }

            int res = 1;

            for (int i = 0; i < 3; i++)
            {
                int two = i;
                int three = (n - two*2) / 3;
                int x=pow(2, two) * pow(3, three);
                res = max(res, x);
            }

            return res;
        }
};