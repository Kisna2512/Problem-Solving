// Leetcode 62 Unique Paths//



class Solution {
public:
    
    int fun(int i,int j,int m,int n,vector<vector<int>> &dp)
    {
        if(i >= m || j >= n)
        {
            return 0;
        }
        
        if(i==m-1 && j==n-1)
        {
            return 1;
        }
        if(dp[i][j]!=-1)
        {
            return  dp[i][j];
        }
        
        
        return dp[i][j]=fun(i+1,j,m,n,dp)+fun(i,j+1,m,n,dp);
  
        
    }
    
  
    
    int uniquePaths(int m, int n) {
        vector<vector<int>> dp(m,vector<int> (n,-1));
        return fun(0,0,m,n,dp);
    }
};