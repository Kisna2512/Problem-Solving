class Solution
{
    public:
        int nthUglyNumber(int n)
        {

            vector<int> dp(n);
    // 1 ,2 ,3,
    // 2 0 1
    // 3 0 
    // 5 0
            
            
            dp[0] = 1;
            int p1 = 0;
            int p2 = 0;
            int p3 = 0;
            for (int i = 1; i < n; i++)
            {
                int two = dp[p1] *2;
                int three = dp[p2] *3;
                int five = dp[p3] *5;
                dp[i] = min(two, min(three, five));

                if (dp[i] == two)
                {
                    p1++;
                }

                if (dp[i] == three)
                {
                    p2++;
                }

                if (dp[i] == five)
                {
                    p3++;
                }
            }

            return dp[n-1];
        }
};