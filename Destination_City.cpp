class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        map<string,int> mp;
        for(auto it:paths)
        {
            mp[it[0]]++;
        }

        string ans="";
        for(auto it:paths)
        {
            if(mp.find(it[1])==mp.end())
            {
                ans+=it[1];
            }
        }

        return ans;
    }
};
