class Solution
{
public:
    float dist_origin(vector<int> &point)
    {
        return sqrt(pow(point[0], 2) + pow(point[1], 2));
    }

    bool static comp(pair<vector<int>, float> &a, pair<vector<int>, float> &b)
    {
        return a.second < b.second;
    }

    vector<vector<int>> kClosest(vector<vector<int>> &points, int k)
    {
        vector<vector<int>> ans;

        vector<pair<vector<int>, float>> pq;
        for (auto it : points)
        {
            pq.push_back({it, dist_origin(it)});
        }

        sort(pq.begin(), pq.end(), comp);
        int i = 0;
        while (k--)
        {
            ans.push_back(pq[i].first);
            i++;
        }

        return ans;
    }
};