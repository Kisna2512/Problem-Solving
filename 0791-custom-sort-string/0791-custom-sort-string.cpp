class Solution {
public:
    string customSortString(string order, string s) {
        
        map<char,int> mp;
        int i=0;
        for(auto it:order)
        {
            mp[it]=i++;
        }
        
        
        for(int i=0;i<s.size();i++)
        {
            for(int j=i;j<s.size();j++)
            {
                if(mp[s[i]] > mp[s[j]])
                {
                    swap(s[i],s[j]);
                }
            }
        }
        
        return s;
        
        
    }
};