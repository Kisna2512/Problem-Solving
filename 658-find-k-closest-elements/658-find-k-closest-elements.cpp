class Solution {
public:
    
    static bool comp(pair<int,int> a,pair<int,int> b)
    {
        if(a.first==b.first)
        {
            return a.second < b.second;
        }
        return a.first < b.first;
    }

    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        
        vector<pair<int,int>> ans;
        for(int i=0;i<arr.size();i++)
        {
            ans.push_back({abs(arr[i]-x),arr[i]});
        }
        sort(ans.begin(),ans.end(),comp);
        arr.clear();
        int i=0;
        while(k--)
        {
            arr.push_back(ans[i].second);
            i++;
        }
        sort(arr.begin(),arr.end());
        return arr;  
        
    }
};