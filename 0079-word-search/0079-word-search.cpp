class Solution {
public:
  
//      bool pathfind(int k,int l,vector<vector<char>>& board,int n,int m,string word,string ans,vector<vector<bool>> &vis,int dx[],int dy[])
//      {
//          if(ans.size()==word.size())
//          {
//              if(ans.compare(word)==0)
//              {
//                   return true;
//              }
//              return false;
            
//          }
         
         
//          for(int i=0;i<4;i++)
//          {
//             int idx=k+dx[i];
//             int idy=l+dy[i];
             
//              if(idx >=0 && idx < n && idy >=0 && idy < m && idx!=idy && !vis[idx][idy])
//              {
                
//                  vis[k][l]=true;
//                  pathfind(idx,idy,board,n,m,word,ans+board[idx][idy],vis,dx,dy);
//                  vis[k][l]=false;
                 
                 
                 
//              }
            
             
//          }
         
         
    
//          return false;
         
         
//      }
    
    bool search(int i, int j, int n, int m,vector<vector<char>> &board,string &word,int k)
    {
        // base cases
        if(k == word.size()) return true;
        if(i<0 || j<0 || i==n || j==m || board[i][j] != word[k]) return false;
        
        char ch= board[i][j];
        board[i][j] = '#';// hashing the word visited, for repeatation problems
        
        // Recursive relations - exploring all four directions
        
        bool op1 = search(i+1,j,n,m,board,word,k+1);
        bool op2 = search(i-1,j,n,m,board,word,k+1);
        bool op3 = search(i,j+1,n,m,board,word,k+1);
        bool op4 = search(i,j-1,n,m,board,word,k+1);
        
        board[i][j]= ch; // backtracking
        
        return op1 || op2 || op3 || op4 ;
    }
    
    
    bool exist(vector<vector<char>>& board, string word) {
        
        // string ans="";
        // int dx[]={+1,0,0,-1};
        // int dy[]={0,-1,1,0};
        // int n=board.size();
        // int m=board[0].size();
        // vector<vector<bool>> vis(n,vector<bool>(m,false));
        
        int n = board.size();
        int m = board[0].size();
        
        for(int i =0 ;i<n;i++){
            for(int j=0;j<m;j++){
                if(board[i][j] == word[0]){
                    if(search(i,j,n,m,board,word,0)) return true;
                }
            }
        }
        
        return false;
       
        
        
        
    }
};