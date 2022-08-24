#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    // Recursive
    int fun(vector<int>& prices,int ind,bool buy,bool coolDown,int profit)
    {
        if(ind == prices.size())
        {
            return 0;
        }
        if(coolDown)
        {
            profit=fun(prices,ind+1,true,false,profit);
        }
        else if(buy)
        {
            profit=max(-prices[ind]+fun(prices,ind+1,false,false,profit),fun(prices,ind+1,true,false,profit));
            
        }
        else{
            profit=max(prices[ind]+fun(prices,ind+1,true,true,profit),fun(prices,ind+1,false,false,profit));
        }
        return profit;
    }

    // Dynamic Programming: Memozation
    
    int fun(vector<int>& prices,int ind,bool buy,bool coolDown,int profit,vector<vector<vector<int>>> &dp)
    {
        if(ind == prices.size())
        {
            return 0;
        }
        if(dp[ind][buy][coolDown]!=-1)
        {
            return dp[ind][buy][coolDown];
        }
        if(coolDown)
        {
            profit=fun(prices,ind+1,true,false,profit);
        }
        else if(buy)
        {
            profit=max(-prices[ind]+fun(prices,ind+1,false,false,profit,dp),fun(prices,ind+1,true,false,profit,dp));
            
        }
        else{
            profit=max(prices[ind]+fun(prices,ind+1,true,true,profit,dp),fun(prices,ind+1,false,false,profit,dp));
        }
        return dp[ind][buy][coolDown]=profit;
    }

    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        vector<vector<vector<int>>> dp(n+1,vector<vector<int>>(3,vector<int>(3,-1)));
        return fun(prices,0,true,false,0,dp);
    }
};

int main(int argc, char const *argv[])
{
    int n;
    cin>>n;
   vector<int> prices(n);
   for(int i=0;i<n;i++)
   {
      cin>>prices[i];
   } 
   Solution obj;
   cout<<obj.maxProfit(prices);


    return 0;
}
