class Solution {
public:
    int maxPerformance(int n, vector<int>& speed, vector<int>& efficiency, int k) {
        
       int mod=1e9+7;
       vector<pair<int,int>> candidates(n);
       for(int i=0;i<n;i++) {
           candidates[i]={efficiency[i],speed[i]};
       }
       sort(candidates.rbegin(),candidates.rend());
        long speedsum=0;
        long ans=0;
        for(auto it:candidates)
        {
            cout<<it.first<<" "<<it.second<<endl;
        }
         priority_queue <int, vector<int>, greater<int>> pq;
        
        for(auto it:candidates)
        {
            pq.push(it.second);
            speedsum+=it.second;
            
            if(pq.size() > k)
            {
                speedsum-=pq.top();
                pq.pop();
            }
            
            ans=max(ans,speedsum*it.first);
        }
 
        return ans%mod;
        
    }
};
