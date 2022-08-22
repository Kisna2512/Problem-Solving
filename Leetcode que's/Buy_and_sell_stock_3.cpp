class Solution {
public:
    
      int getProfit(int ind,bool buy,int profit,vector<int>& prices, vector<vector<vector<int>>> &dp,int cap)
    {
          if(cap==0)
          {
              return 0;
          }
        if(ind==prices.size())
        {
            return 0;
        }
         if(dp[ind][buy][cap]!=-1)
        {
            return dp[ind][buy][cap];
        }
        if(buy)
        {                   
            profit=max(-prices[ind]+getProfit(ind+1,false,profit,prices,dp,cap),getProfit(ind+1,true,profit,prices,dp,cap));
        }
        else
        {                      
            profit=max(prices[ind]+getProfit(ind+1,true,profit,prices,dp,cap-1),getProfit(ind+1,false,profit,prices,dp,cap));
        }
        
       
        return dp[ind][buy][cap]=profit;
    }
    
   
    int maxProfit(vector<int>& prices) {
          int n=prices.size();
        vector<vector<vector<int>>> dp(n+1,vector<vector<int>>(2,vector<int>(3,-1)));
        return getProfit(0,true,0,prices,dp,2);
        
    }
};
