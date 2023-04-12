class Solution
{
public:
    bool judgeSquareSum(int c)
    {
        if (c < 3)
        {
            return true;
        }
        long long a = 0;
        long long b = sqrt(c);
        while (a <= b)
        {
            // long long mid=a+(b-a)/2;
            if (a * a + b * b == c)
            {
                return true;
            }
            else if (a * a + b * b < c)
            {
                a++;
            }
            else
            {
                b--;
            }
        }
        return false;
    }
};