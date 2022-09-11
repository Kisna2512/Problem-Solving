class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        
        map<int,int> mp;
        
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]%2==0)
            {
                 mp[nums[i]]++; 
            }
          
        }
        if(mp.size()==0)
        {
            return -1;
        }
        for(auto it:mp){cout<<it.first<<" "<<it.second<<endl;}
        int maxi=0;
        int ans=0;
        for(auto it:mp)
        {
            maxi=max(maxi,it.second);
            
        }
        vector<int> v;
        for(auto it:mp)
        {
            if(maxi==it.second)
            {
                v.push_back(it.first);
            }
        }
        sort(v.begin(),v.end());
        
        
        return v[0]; 
        
    }
};
