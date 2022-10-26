class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
     
        
        map<string,int> mp;
        vector<string> v;
        for(int i=0;i<s.size();i++)
        {
            if(i+10 <= s.size())
            {
                 mp[s.substr(i,10)]++;
            }
           
    
        }
        
        for(auto it:mp)
        {
            cout<<it.first<<" "<<it.second<<endl;
        }
        
        
        for(auto it:mp)
        {
            if(it.second > 1)
            {
                v.push_back(it.first);
            }
        }
        
        
        return v;
        
        
        
    }
};