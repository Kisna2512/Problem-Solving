class Solution
{
public:
    long long mod = 1e5;
    vector<int> successfulPairs(vector<int> &spells, vector<int> &potions, long long success)
    {
        int n = spells.size();
        vector<int> ans;
        sort(potions.begin(), potions.end());
        for (int i = 0; i < spells.size(); i++)
        {
            double val = (double)success / spells[i] * 1.0;
            long long idx = lower_bound(potions.begin(), potions.end(), val) - potions.begin();
            ans.push_back(potions.size() - idx);
        }
        return ans;
    }
};