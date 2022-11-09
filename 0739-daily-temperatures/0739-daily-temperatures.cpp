class Solution
{
    public:
        vector<int> dailyTemperatures(vector<int> &t)
        {

            int n = t.size();

            vector<int> ans(n, 0);

            for (int i = n - 2; i >= 0; i--)
            {
                int j = i + 1;

                while (j < n && t[i] >= t[j])
                {
                    j += ans[j] ? ans[j] : n;
                }
                if (j < n){ ans[i] = j - i;}
            }

            return ans;
        }
};