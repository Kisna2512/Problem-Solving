class Solution {
public:
    vector<int> findOriginalArray(vector<int>& changed) {
 
       if(changed.size()%2!=0) return {}; 
         sort(changed.begin(),changed.end());
        map<int,int> mp;
        vector<int> ans;
        for(int i=0;i < changed.size();i++)
        {
            mp[changed[i]]++;
        }

        for(auto it:changed)
        {
            if(mp[it]==0)
            {
                continue;
            }
            if(mp[2*it]==0)
            {
                return {};
            }
            ans.push_back(it);
            mp[it]--;
            mp[2*it]--;
        }
    
        return ans;
        
    }
};
