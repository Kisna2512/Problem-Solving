class Solution
{
    public:

        bool halvesAreAlike(string s)
        {

            string vo = "aeiouAEIOU";
            int n = s.size() / 2;

            set<char> st;
            for (auto it: vo)
            {
                st.insert(it);
            }

            int cnt1 = 0;

            for (int i = 0; i < n; i++)
            {
                if (st.find(s[i]) != st.end())
                {
                    cnt1++;
                }
            }

            int cnt2 = 0;

            for (int i = n; i < s.size(); i++)
            {
                if (st.find(s[i]) != st.end())
                {
                    cnt2++;
                }
            }

            return cnt1 == cnt2;
        }
};