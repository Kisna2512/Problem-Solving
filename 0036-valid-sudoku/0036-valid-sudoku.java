class Solution {
    public boolean isValidSudoku(char[][] board) {
        
        
        int m=board.length;
        int n=board[0].length;
        
        
        
        for(int r=0;r<m;r++)
        {
            for(int c=0;c<n;c++)
            {
                if(board[r][c]!='.')
                {
                    if(isValid(board,r,c,board[r][c],m,n)==false)
                    {
                        return false;
                    }
                }
            }
        }
        
        
        
        return true;
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
    }
    
    private boolean isValid(char[][] board,int r,int c,char ch,int m,int n)
    {
        // for row
        for(int j=0;j<n;j++)
        {
            if(j!=c && board[r][j]==ch)
            {
                return false;
            }
        }
        
         // for col
        for(int i=0;i<m;i++)
        {
            if(i!=r && board[i][c]==ch)
            {
                return false;
            }
        }
        
        
        int ri=3*(r/3);
        int ci=3*(c/3);
        
        for(int i=ri;i<ri+3;i++)
        {
            for(int j=ci;j<ci+3;j++)
            {
                if(i!=r && j!=c && board[i][j]==ch)
                {
                    return false;
                }
            }
        }
        
        
        return true;
        
    }
    
    
    
    
    
    
    
    
    
    
}