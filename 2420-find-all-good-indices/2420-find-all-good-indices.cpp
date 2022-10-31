class Solution
{
    public:
        vector<int> goodIndices(vector<int> &nums, int k)
        {
            int n=nums.size();

            vector<int> pre1(n,1);
           
            for(int i=1;i<n;i++)
            {
                if(nums[i] <= nums[i-1])
                {
                    pre1[i]=1+pre1[i-1];
                }
            }
            
            
             vector<int> pre2(n,1);
           
            for(int i=n-2;i>=0;i--)
            {
                if(nums[i] <= nums[i+1])
                {
                    pre2[i]=1+pre2[i+1];
                }
            }
            
            
            
            
            vector<int> ans;
            
            for(int i=k;i<n-k;i++)
            {
                if((pre1[i-1] >=k && pre2[i+1] >= k)  )
                {
                    ans.push_back(i);
                }
            }
            
            
            
            
            return ans;
        }
};