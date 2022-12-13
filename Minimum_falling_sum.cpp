class Solution {
public:

     int pathSum(vector<vector<int>> &matrix,int i,int j,vector<vector<int>> &dp)
     {    
        int m=matrix.size(); 
         if(j < 0 || j >= m )
         {
             return 1e8;
         }

         if(i==m-1)
         {
             return matrix[i][j];
         }

         if(dp[i][j]!=-1)
         {
             return dp[i][j];
         }

        int path1=matrix[i][j]+pathSum(matrix,i+1,j-1,dp);
        int path2=matrix[i][j]+pathSum(matrix,i+1,j,dp);
        int path3=matrix[i][j]+pathSum(matrix,i+1,j+1,dp);
        
        return dp[i][j]=min(path1,min(path2,path3));

     }
   




    int minFallingPathSum(vector<vector<int>>& matrix) {
       int n=matrix.size();
       vector<vector<int>> dp(n+1,vector<int>(n+1,-1));
       int ans=1e8;
       for(int i=0;i<n;i++)
       {
           ans=min(ans,pathSum(matrix,0,i,dp));
       }

     return ans;
    }
};
