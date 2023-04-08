class Solution
{
public:
    vector<vector<int>> largeGroupPositions(string s)
    {
        vector<vector<int>> ans;
        for (int i = 0; i < s.size(); i++)
        {
            int cnt = 0;
            vector<int> temp(2);
            for (int j = i + 1; j < s.size(); j++)
            {
                if (s[i] == s[j])
                {
                    cnt++;
                }
                else
                {
                    break;
                }
            }
            if (cnt >= 2)
            {
                temp[0] = i;
                temp[1] = i + cnt;
                ans.push_back(temp);
                i = i + cnt;
            }
        }
        return ans;
    }
};