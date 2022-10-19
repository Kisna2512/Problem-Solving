class Solution {
public:
    vector<int> numberOfPairs(vector<int>& nums) {
        map<int,int> mp;
        
        
        for(auto it:nums)
        {
            mp[it]++;
        }
        
        int cntP=0;
        int cntLeftOver=0;
        int cntodd=0;
        for(auto it:mp)
        {
            if(it.second > 1 && it.second % 2==0)
            {
                cntP+=((it.second)/2);
            }else
            {
                 cntP+=((it.second-1)/2);
                cntLeftOver++;
                
            }
        }
        
        
      vector<int> ans;
        ans.push_back(cntP);
        ans.push_back(cntLeftOver);
        return  ans;
    }
};