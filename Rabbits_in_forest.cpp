class Solution
{
public:
    int numRabbits(vector<int> &ans)
    {
        map<int, int> mp;
        int res = 0;
        for (auto it : ans)
        {
            mp[it]++;
        }
        for (auto it : mp)
        {
            res = res + ceil((float)it.second / (it.first + 1)) * (it.first + 1);
        }
        return res;
    }
};