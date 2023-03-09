class Solution {
public:
    vector<vector<int>> mergeArrays(vector<vector<int>>& nums1, vector<vector<int>>& nums2) {
        
       vector<vector<int>> ans;
        map<int,int> mp;
        for(auto it:nums1){
            mp[it[0]]=it[1];
        }

        for(auto it:nums2)
        {
            if(mp.find(it[0])!=mp.end())
            {
                mp[it[0]]+=it[1];
            }
            else
            {
                mp[it[0]]=it[1];
            }
        }

        for(auto it:mp)
        {
            vector<int> temp;
            temp.push_back(it.first);
            temp.push_back(it.second);
            ans.push_back(temp);
        }


       return ans;

    }
};
