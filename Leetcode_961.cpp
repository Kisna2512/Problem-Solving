class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        map<int,int> mp;
        int n=nums.size();
      
        for(auto it:nums)
        {
            mp[it]++;
        }
        
        int ans;
        for(auto it:mp)
        {
            if(it.second==(n/2))
            {
                ans=it.first;
                break;
            }
        }
      return ans;
    }
};
