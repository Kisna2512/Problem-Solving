class Solution {
public:
    
    int fun(string &s,int low,int high,int k)
    {
        if(high-low +1 < k)
        {
            return 0;
        }
        
        vector<int> freq(26,0);
       for(int i=low;i<=high;i++)
       {
           freq[s[i]-'a']++;
       }
        
        
        int i=low;
        int maxLen=0;
        
        for(int j=low;j<=high;j++)
        {
             if(freq[s[j]-'a'] < k)
              {
                   maxLen=max(maxLen,fun(s,i,j-1,k));
                   i=j+1;
              }
        }
        
        if(i==low)
        {
            return (high-low+1);
        }
        
        
        return max(maxLen,fun(s,i,high,k));
        
    }
    
    
    int longestSubstring(string s, int k) {
        return fun(s,0,s.size()-1,k);
    }
};