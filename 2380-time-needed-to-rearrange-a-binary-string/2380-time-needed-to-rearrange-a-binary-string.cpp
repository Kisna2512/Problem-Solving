class Solution {
public:
    
    
    
    int solve(string s,int res)
    {
        
        int i=0;
        int k=0;
        
        while( i < s.size())
        {
            if(s[i]=='0' && s[i+1]=='1')
            {
                swap(s[i],s[i+1]);
                k++;
                i+=2;
            }
            else
            {
                i++;
            }
        }
        
        if(k==0) return res;
        return solve(s,res+1);
          
    }
    
    
    
    int secondsToRemoveOccurrences(string s) {
        return solve(s,0);
    }
};