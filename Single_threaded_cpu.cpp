class Solution {
public:
    vector<int> getOrder(vector<vector<int>>& tasks) {
         
           for(int i=0;i<tasks.size();i++)
           {
               tasks[i].push_back(i);
           }  
            
           sort(tasks.begin(),tasks.end());
           for(auto it:tasks)
           {
               for(auto i:it)
               {
                   cout<<i<<" ";
               }cout<<endl;
           }
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
        long long curr=tasks[0][0];
        int i=0;
        int n=tasks.size();
        vector<int> ans;
        while(i < n ||  !pq.empty())
        {
            while(i < n && curr >= tasks[i][0])
            {
                pq.push({tasks[i][1],tasks[i][2]});
                i++;
            }

            auto top=pq.top();
            curr+=top.first;
            ans.push_back(top.second);
            pq.pop();

            if(i < n && pq.empty() && curr < tasks[i][0])
            {
                curr=tasks[i][0];
            }

        }
         


      return ans;

    }
};
