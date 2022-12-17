class Solution {
public:
    int balancedStringSplit(string s) {
        
       int r=0;
       int l=0;

       int ans=0;

       for(auto it:s)
       {
           if(it=='R')
           {
               r++;
           }else if(it=='L')
           {
               l++;
           }
           if(r==l)
           {
               ans++;
               r=0;
               l=0;
           }
       }    
        return ans;

    }
};
