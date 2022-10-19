class Solution {
public:
    

    
    static bool comp(pair<string,int>a,pair<string,int> b)
    {
        if(a.second == b.second)
        {
            return a.first < b.first;
        }
        
        return a.second > b.second;
    }
    
    
    vector<string> topKFrequent(vector<string>& words, int k) {
       
        
         map<string,int> mp;
        for(int i=0;i<words.size();i++)
        {
            mp[words[i]]++;
        }
        
       vector<pair<string,int>> v;
       for(auto it:mp)
       {
           v.push_back({it.first,it.second});
       }
        sort(v.begin(),v.end(),comp);
        v.resize(k);
        words.clear();
        
        for(auto it:v)
        {
            words.push_back(it.first);
        }
        
        return words;
        
    }
};