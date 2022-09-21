class Solution {
public:

    vector<int> sumEvenAfterQueries(vector<int>& nums, vector<vector<int>>& queries) {
        vector<int> ans;
        
        int sum=0;
        for(auto it:nums)
        {
            if((it%2)==0)
            {
                sum+=it;
            }
        }
        for(int i=0;i<nums.size();i++)
        {
            int idx=queries[i][1];
            int val=queries[i][0];
           
            if(nums[idx]%2==0)
            {
                sum-=nums[idx];
            }
             nums[idx]=nums[idx]+val;
            if(nums[idx]%2==0)
            {
                sum+=nums[idx];
            }
            ans.push_back(sum);
        }
        return ans;
    }
};