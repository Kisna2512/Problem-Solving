class Solution {
public:
    
    //Recursive
    int getProfit(int ind,bool buy,int profit,vector<int>& prices)
    {
        if(ind==prices.size())
        {
            return 0;
        }
     
        if(buy)
        {                   
            profit=max(-prices[ind]+getProfit(ind+1,false,profit,prices),getProfit(ind+1,true,profit,prices));
        }
        else
        {                     
            profit=max(prices[ind]+getProfit(ind+1,true,profit,prices),getProfit(ind+1,false,profit,prices));
        }
        
       
        return profit;
    }
    
    //Memoization
    int getProfit(int ind,bool buy,int profit,vector<int>& prices,vector<vector<int>> &dp)
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
            profit=max(-prices[ind]+getProfit(ind+1,false,profit,prices,dp),getProfit(ind+1,true,profit,prices,dp));
        }
        else
        {                      
            profit=max(prices[ind]+getProfit(ind+1,true,profit,prices,dp),getProfit(ind+1,false,profit,prices,dp));
        }
        
       
        return dp[ind][buy]=profit;
    }
    
  
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        vector<vector<int>> dp(n+1,vector<int>(2,-1));
        return getProfit(0,true,0,prices,dp);
        
        Tabulation
        vector<vector<int>> dp(n+1,vector<int>(2,0));
        dp[n][0]=dp[n][1]=0;
        int profit=0;
         for(int ind=n-1;ind >=0 ;ind--)
         {
             for(int buy=0;buy<=1;buy++)
             {
                
                     
                    if(buy)
                    {                   
                       profit=max(-prices[ind]+dp[ind+1][0],dp[ind+1][1]);
                    }
                    else
                    {                     
                        profit=max(prices[ind]+dp[ind+1][1],dp[ind+1][0]);
                    }

                   dp[ind][buy]=profit;
                   
             } 
         } 
        
        return dp[0][1];

        // Space Optimisation
        
         vector<int> ahead(2,0),cur(2,0);
        ahead[0]=ahead[1]=0;
        int profit=0;
         for(int ind=n-1;ind >=0 ;ind--)
         {
             for(int buy=0;buy<=1;buy++)
             {
                
                     
                    if(buy)
                    {                   
                       profit=max(-prices[ind]+ahead[0],ahead[1]);
                    }
                    else
                    {                      
                        profit=max(prices[ind]+ahead[1],ahead[0]);
                    }

                   cur[buy]=profit;
                   
             } 
             ahead=cur;
         } 
        
        return ahead[1];

        //Using Four Variables
        int aheadNotBuy,aheadBuy,CurNotBuy,CurBuy;
        aheadNotBuy=aheadBuy=0;
        
        for(int ind =n-1;ind >=0;ind--)
        {
           
             CurNotBuy=max(prices[ind]+aheadBuy,aheadNotBuy);
            CurBuy=max(-prices[ind]+aheadNotBuy,aheadBuy);
            
            
            aheadBuy=CurBuy;
            aheadNotBuy=CurNotBuy;
            
            
        }

       return aheadBuy; 

    }
};