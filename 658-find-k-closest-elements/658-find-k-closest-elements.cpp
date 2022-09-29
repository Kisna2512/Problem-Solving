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
        priority_queue <pair<int,int> > pq;
        
        
        for(int i=0;i<arr.size();i++)
        {
            // pq.push({abs(arr[i]-x),arr[i]});
            ans.push_back({abs(arr[i]-x),arr[i]});
        }
        sort(ans.begin(),ans.end(),comp);
        for(auto it:ans)
        {
            cout<<it.first<<" "<<it.second<<endl;
        }
        // while(!pq.empty())
        // {
        //     ans.push_back(pq.top().second);
        //     pq.pop();
        // }
        
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