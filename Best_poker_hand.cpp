class Solution
{
public:
    string bestHand(vector<int> &ranks, vector<char> &suits)
    {
        map<int, int> mp;
        map<char, int> m;
        for (int i = 0; i < ranks.size(); i++)
        {
            mp[ranks[i]]++;
            m[suits[i]]++;
        }

        for (auto it : m)
        {
            if (it.second == 5)
            {
                return "Flush";
            }
        }

        for (auto it : mp)
        {
            if (it.second >= 3)
            {
                return "Three of a Kind";
            }
        }

        for (auto it : mp)
        {
            if (it.second == 2)
            {
                return "Pair";
            }
        }

        return "High Card";
    }
};