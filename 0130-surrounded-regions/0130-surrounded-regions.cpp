class Solution {
public:
    void solve(vector<vector<char>>& board) {
        
        
        
        queue<pair<int,int>> q;
        
        int drow[]={-1,0,1,0};
        int dcol[]={0,1,0,-1};
        for(int i=0;i<board.size();i++)
        {
            for(int j=0;j<board[i].size();j++)
            {
               if(i==0 || j==0 || i ==board.size()-1 || j==board[i].size()-1)
               {
                   if(board[i][j]=='O')
                   {
                       q.push({i,j});
                   }
               }
            }
        }
        
        while(!q.empty())
        {
            int row=q.front().first;
            int col=q.front().second;
            q.pop();
            board[row][col]='Y';
            for(int i=0;i<4;i++)
            {
                int nrow=row+drow[i];
                int ncol=col+dcol[i];
                
                if(nrow >= 0 && ncol >= 0 && nrow < board.size() && ncol < board[0].size() && board[nrow][ncol]=='O')
                {
                    q.push({nrow,ncol});
                }
                  
            }
        }
        
        
        for(int i=0;i<board.size();i++)
        {
            for(int j=0;j<board[i].size();j++)
            {
              if(board[i][j]=='Y')
              {
                   board[i][j]='O';                  
              }else
              {
                  board[i][j]='X';
              }
            }
        }
        
        return;
        
    
    }
};