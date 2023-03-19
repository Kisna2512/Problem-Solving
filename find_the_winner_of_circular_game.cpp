class Solution
{
public:
    int findTheWinner(int n, int k)
    {
        vector<int> ans;
        for (int i = 1; i <= n; i++)
        {
            ans.push_back(i);
        }
        int l = n;
        int i = 0;
        while (l > 1)
        {
            i = (i + k - 1) % l;
            ans.erase(ans.begin() + i);
            l--;
        }
        return ans[0];
    }
};