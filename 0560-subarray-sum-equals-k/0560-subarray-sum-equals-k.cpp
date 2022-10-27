class Solution
{
    public:

       	// Bruteforce It will give you TLE
        void fun(vector<int> &nums, int start, int end, int &cnt, int &k)
        {
            if (end == nums.size())
            {
                return;
            }
            else if (start > end)
            {
                fun(nums, 0, end + 1, cnt, k);
            }
            else
            {
                int sum = 0;
                for (int i = start; i <= end; i++)
                {
                    sum += nums[i];
                }
                if (sum == k)
                {
                    cnt++;
                }
                fun(nums, start + 1, end, cnt, k);
            }
            return;
        }

   	// It is iterative way it also gives you TLE
    int fun(vector<int> &nums, int k)
    {
        int n = nums.size();

        int cnt = 0;
        for (int i = 0; i < n; i++)
        {

            for (int j = i; j < n; j++)
            {
                int sum = 0;
                for (int k = i; k <= j; k++)
                {
                    sum += nums[k];
                }
                if (sum == k)
                {
                    cnt++;
                }
            }
        }

        return cnt;
    }

    int fun1(vector<int> &nums, int k)
    {
        int sum = 0;
        map<int,int> mp;
        
        mp[sum]=1;
        int cnt=0;
        for(auto it:nums)
        {
            sum+=it;
            int find=sum-k;
            if(mp.find(find)!=mp.end())
            {
                cnt+=mp[find];
            }
            mp[sum]++;
        }
        
        return cnt;
        
        
        
    }

    int subarraySum(vector<int> &nums, int k)
    {

        int cnt = 0;
        return fun1(nums, k);
    }
};