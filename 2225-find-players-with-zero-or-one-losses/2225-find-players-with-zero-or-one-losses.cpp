class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        
        
        map<int,int> mp;
        for(int i=0;i<matches.size();i++)
        {
            mp[matches[i][0]]=i;
        }
        
        
        
      
        for(int i=0;i<matches.size();i++)
        {
            if(mp.find(matches[i][1])!=mp.end())
            {
                mp.erase(matches[i][1]);
            }
        }
        
        
        
        map<int,int> m;
        
        for(int i=0;i<matches.size();i++)
        {
            m[matches[i][1]]++;
        }
        
        vector<int> ans_1;
        for(auto it:m)
        {
            if(it.second==1)
            {
                ans_1.push_back(it.first);
            }
        }
        
        
        
        
        
        
        vector<int> ans_0;
        for(auto it:mp)
        {
            ans_0.push_back(it.first);
        }
        
        return {ans_0,ans_1};
        
    }
};