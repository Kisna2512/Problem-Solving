class Solution
{
    public:
        int countGoodSubstrings(string s)
        {
            int ans = 0;

            int i = 0;
            int j = i + 2;
            int n = s.length();

            while (i <= j && i < n && j < n)
            {
                if (s[i] != s[i + 1] && s[i + 1] != s[i + 2] && s[i] != s[i + 2])
                {
                    ans++;
                }
                i++;
                j++;
            }
            return ans;
        }
};