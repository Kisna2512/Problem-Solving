class Solution {
public:
    
   
    int maxIceCream(vector<int>& costs, int coins) {
        sort(costs.begin(),costs.end());
        int ans=0;
        for(auto it:costs)
        {
           if(it <= coins)
           {
               coins-=it;
               ans++;
           }
        }

       return ans;
    }
};
