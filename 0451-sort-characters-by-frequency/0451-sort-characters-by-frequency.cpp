class Solution
{
    public:

        bool static comp(pair<char, int> a, pair<char, int> b)
        {
            return a.second > b.second;
        }

    string frequencySort(string s)
    {

        map<char, int> mp;

        for (auto it: s)
        {
            mp[it]++;
        }

        vector<pair<char, int>> v;
        for (auto i: mp)
        {
            v.push_back({ i.first,
                i.second });
        }

        sort(v.begin(), v.end(), comp);

        string ans = "";
        for (int i = 0; i < v.size(); i++)
        {
            int s=v[i].second;
            while(s--)
            {
                  ans += v[i].first;
            }
          
        }

        return ans;
    }
};