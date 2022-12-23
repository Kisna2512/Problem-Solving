class MapSum {
public:
     map<string,int> mp;
    MapSum() {
        
    }
    
    void insert(string key, int val) {
        mp[key]=val;
    }
    
    int sum(string prefix) {
        int ans=0;
        for(auto it:mp)
        {
           string s=it.first;
           cout<<s<<endl;
           int size=0;
           while(size < prefix.size() && size < s.size() && s[size]==prefix[size])
           {
               size++;
               if(size==prefix.size())
            {
               ans+=it.second;
            }
           }
           
           
        }
        return ans;
    }
};

/**
 * Your MapSum object will be instantiated and called as such:
 * MapSum* obj = new MapSum();
 * obj->insert(key,val);
 * int param_2 = obj->sum(prefix);
 */
