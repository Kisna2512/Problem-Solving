class Solution
{
    public:

        int beautySum(string s)
        {

            int beauty = 0;

            for (int i = 0; i < s.size(); i++)
            {
                unordered_map<char, int> mp;
                for (int j = i; j < s.size(); j++)
                {
                    mp[s[j]]++;
                    int mini = INT_MAX;
                    int maxi = INT_MIN;

                    for (auto it: mp)
                    {
                        mini = min(mini, it.second);
                        maxi = max(maxi, it.second);
                    }

                    beauty += maxi - mini;
                }
            }

            return beauty;
        }
};