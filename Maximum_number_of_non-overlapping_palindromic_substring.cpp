class Solution {
public:
    
    
    
    bool isPalindrome(string s,int i,int j)
    {
        int low=i;
        int high=j;
        
        
        while(low <= high)
        {
            if(s[low]!=s[high])
            {
                return false;
            }
            low++;
            high--;
        }
        
        
        return true;
        
        
    }
    

    int maxPalindromes(string s, int k) {
        int cnt=0;
        
        
        for(int i=0;i<s.size();i++)
        {
            
            for(int j=0;j<s.size();j++)
            {
               int len=j-i+1;
                if(len > k+1)
                {
                    break;
                }
                
                if(len >= k && isPalindrome(s,i,j))
                {
                    cnt++;
                    i=j;
                    break;
                }
            }
        
            
        }
            
            
            
       return cnt;     
             
            
    }
};
