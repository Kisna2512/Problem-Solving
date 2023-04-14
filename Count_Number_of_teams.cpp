class Solution
{
public:
    int numTeams(vector<int> &rating)
    {
        int cnt = 0;
        for (int i = 0; i < rating.size(); i++)
        {
            int left_larger = 0, right_smaller = 0, left_smaller = 0, right_larger = 0;
            for (int idx = i - 1; idx >= 0; idx--)
            {
                if (rating[idx] < rating[i])
                {
                    left_smaller++;
                }
                else
                {
                    left_larger++;
                }
            }

            for (int idx = i + 1; idx < rating.size(); idx++)
            {
                if (rating[idx] > rating[i])
                {
                    right_larger++;
                }
                else
                {
                    right_smaller++;
                }
            }

            cnt += (left_smaller * right_larger + left_larger * right_smaller);
        }
        return cnt;
    }
};