class Solution
{
    public:
        int eraseOverlapIntervals(vector<vector < int>> &intervals)
        {

            sort(intervals.begin(), intervals.end());
            int previous = 0;
            int ans = 0;
            int n = intervals.size();
            for (int i = 1; i < intervals.size(); i++)
            {

                if (intervals[i][0] < intervals[previous][1])
                {

                    ans++;

                    if (intervals[i][1] <= intervals[previous][1])
                    {
                        previous = i;
                    }
                }
                else
                {
                    previous = i;
                }
            }

            return ans;
        }
};