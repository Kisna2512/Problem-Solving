class Solution
{
public:
    vector<int> findRightInterval(vector<vector<int>> &iter)
    {
        int n = iter.size();
        vector<pair<pair<int, int>, int>> v;
        for (int i = 0; i < n; i++)
        {
            v.push_back({{iter[i][0], iter[i][1]}, i});
        }

        sort(v.begin(), v.end());
        vector<int> ans;
        for (int i = 0; i < n; i++)
        {
            int res = -1;
            int l = 0;
            int e = n - 1;
            while (l <= e)
            {
                int mid = l + (e - l) / 2;
                auto it = v[mid];
                if (iter[i][1] <= it.first.first)
                {
                    res = it.second;
                    e = mid - 1;
                }
                else
                {
                    l = mid + 1;
                }
            }
            ans.push_back(res);
        }
        return ans;
    }
};