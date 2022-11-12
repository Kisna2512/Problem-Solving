
class Solution {
public:
    int numEnclaves(vector<vector<int>>& grid) {
        
        int n=grid.size();
        int m=grid[0].size();
        vector<vector<int>> ans=grid;
        vector<vector<int>> vis(n,vector<int>(m,0));
        
        queue<pair<int,int>> q;
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if((i==0 || j==0 || i==n-1 || j==m-1) && ans[i][j]==1 && !vis[i][j])
                {
                    q.push({i,j});
                    vis[i][j]=1;
                }
            }
        }
        
        
        int dx[]={-1,0,1,0};
        int dy[]={0,1,0,-1};
        
        while(!q.empty())
        {
            int row=q.front().first;
            int col=q.front().second;
            q.pop();
            ans[row][col]=0;
            for(int i=0;i<4;i++)
            {
                int nrow=dx[i]+row;
                int ncol=dy[i]+col;
                
                if(nrow >=0 && ncol >=0 && nrow < n && ncol < m && !vis[nrow][ncol] && ans[nrow][ncol]==1)
                {
                    q.push({nrow,ncol});
                    vis[nrow][ncol]=1;
                }
            }
            
            
            
            
        }
        
        int cnt=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(ans[i][j]==1)
                {
                    cnt++;
                }
            }
        }
        
       return cnt;  
    }
};