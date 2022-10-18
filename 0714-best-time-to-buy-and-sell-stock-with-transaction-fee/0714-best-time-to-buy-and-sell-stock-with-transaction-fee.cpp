class Solution {
public:
    
    int getProfit(int ind,bool buy,int profit,vector<int>& prices,vector<vector<int>> &dp,int fees)
    {
        if(ind==prices.size())
        {
            return 0;
        }
         if(dp[ind][buy]!=-1)
        {
            return dp[ind][buy];
        }
        if(buy)
        {                   
            profit=max(-prices[ind]+getProfit(ind+1,false,profit,prices,dp,fees),getProfit(ind+1,true,profit,prices,dp,fees));
        }
        else
        {                      
            profit=max(prices[ind]-fees+getProfit(ind+1,true,profit,prices,dp,fees),getProfit(ind+1,false,profit,prices,dp,fees));
        }
        
       
        return dp[ind][buy]=profit;
    }
    int maxProfit(vector<int>& prices, int fee) {
         int n=prices.size();
        vector<vector<int>> dp(n+1,vector<int>(2,-1));
        return getProfit(0,true,0,prices,dp,fee);
    }
};