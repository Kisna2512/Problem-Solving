class Solution
{
public:
    int numberOfSubarrays(vector<int> &nums, int k)
    {
        int cnt = 0;
        int ans = 0;
        map<int, int> mp;
        for (auto it : nums)
        {
            if (it % 2)
            {
                cnt++;
            }
            if (cnt == k)
            {
                ans++;
            }
            if (mp.find(cnt - k) != mp.end())
            {
                ans += mp[cnt - k];
            }
            mp[cnt]++;
        }
        return ans;
    }
};