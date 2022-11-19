class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        
        
        map<int,int> mp;
        
        
        for(auto it:arr1)
        {
            mp[it]++;
        }
        
        int cnt=0;
        
        
        for(auto it:arr2)
        {
            while(mp[it]!=0)
            {
                arr1[cnt++]=it;
                mp[it]--;
            }
        }
        
        for(auto it:mp)
        {
            if(it.second!=0)
            {
                while(it.second!=0)
                {
                    arr1[cnt++]=it.first;
                    it.second--;
                }
            }
        }
        
        
        return arr1;
        
        
        
        
        
        
        
     
        
        
        
    }
};