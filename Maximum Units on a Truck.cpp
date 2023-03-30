- class Solution
{
public:
    bool static comp(vector<int> &a, vector<int> &b)
    {
        return a[1] > b[1];
    }

    int maximumUnits(vector<vector<int>> &boxTypes, int truckSize)
    {
        sort(boxTypes.begin(), boxTypes.end(), comp);

        int ans = 0;
        int x = truckSize;
        for (auto it : boxTypes)
        {
            if (x > 0)
            {
                if (x > it[0])
                {
                    ans = ans + (it[0]) * it[1];
                    x = x - it[0];
                }
                else
                {
                    ans = ans + (x)*it[1];
                    x = 0;
                }
            }
        }
        return ans;
    }
};
