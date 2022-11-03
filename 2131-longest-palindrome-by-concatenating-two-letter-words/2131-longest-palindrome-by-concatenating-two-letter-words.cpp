class Solution
{
    public:

        bool isPalindrome(string s)
        {
            int l = 0;
            int r = s.size() - 1;

            while (l<= r)
            {
                if (s[l++] != s[r--])
                {
                    return false;
                }
            }
            return true;
        }

    int longestPalindrome(vector<string> &words)
    {

        map<string, int> mp;
        int len = 0;
        for (auto it: words)
        {
            string str = it;
            reverse(str.begin(),str.end());
            if (mp[str])
            {
                len += 4;
                mp[str]--;
            }
            else
            {
                mp[it]++;
            }
        }

        bool flag = false;
        for (auto it: mp)
        {
            if (it.first[0] == it.first[1] && flag == false && it.second==1)
            {
                len += 2;
                flag = true;
            }
        }

        return len;
    }
};