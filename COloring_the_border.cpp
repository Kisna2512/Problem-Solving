class Solution {
public:
    vector<vector<int>> colorBorder(vector<vector<int>>& grid, int row, int col, int color) {
         
        int n=grid.size();
        int m=grid[0].size();
        vector<vector<int>> ans=grid;
        vector<vector<int>> vis(n,vector<int>(m,0));
        queue<pair<int,int>> q;
        q.push({row,col});
        vis[row][col]=1;
        int dx[]={0,-1,0,+1};
        int dy[]={+1,0,-1,0};
        int val=grid[row][col];
        while(!q.empty())
        {
            int r=q.front().first;
            int c=q.front().second;
            q.pop();
            int cnt=0;
            
            for(int i=0;i<4;i++)
            {
                int nrow=r+dx[i];
                int ncol=c+dy[i];
                if( nrow >= 0 && nrow < n && ncol >=0 && ncol < m && grid[nrow][ncol]==val )
                {
                    cnt++;
                    if(vis[nrow][ncol]==0)
                    {
                        q.push({nrow,ncol});
                        vis[nrow][ncol]=1;
                    }
                  
                }
            }
            if(cnt!=4){
                ans[r][c]=color;
            }

        }

       
      return ans;

    }
};