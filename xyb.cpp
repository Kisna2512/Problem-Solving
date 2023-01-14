class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        vector<vector<int>> ans;

        set<int>mp;
        for(auto it:nums1)
        {
           mp.insert(it);
        }
       set<int> temp;
        for(auto it:nums2)
        {
            if(mp.find(it)==mp.end())
            {
               temp.insert(it);
            }
        }
        vector<int> s(temp.begin(),temp.end());
        ans.push_back(s);
        temp.clear();
        mp.clear();
        
        for(auto it:nums2)
        {
            mp.insert(it);
        }

        for(auto it:nums1)
        {
            if(mp.find(it)==mp.end())
            {
                 temp.insert(it);
            }
        }
        vector<int>  s1(temp.begin(),temp.end());
        ans.push_back(s1);
        reverse(ans.begin(),ans.end());
      return ans;
    }
};
