class Solution
{
    public:
        vector<int> findAnagrams(string s, string p)
        {

            if(s.size() < p.size())
            {
                return {};
            }
             
            vector<int> ans;

            vector<int> P(26, 0);
            vector<int> S(26, 0);

            for (int i = 0; i < p.size(); i++)
            {
                S[s[i] - 'a']++;
                P[p[i] - 'a']++;
            }

            if (S == P)
            {
                ans.push_back(0);
            }

            for (int i = p.size(); i < s.size(); i++)
            {
                S[s[i] - 'a']++;
                S[s[i - p.size()] - 'a']--;

                if (S == P)
                {
                    ans.push_back(i + 1 - p.size());
                }
            }
            return ans;
        }
};