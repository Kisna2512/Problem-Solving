class Solution {
public:
  
 //Greedy Approach
    string breakPalindrome(string s) {
        
        int size=s.size();
        
        if(size<=1)
        {
            return "";
        }
        for(int i=0;i<s.size()/2;i++)
        {
            if(s[i]!='a')
            {
                s[i]='a';
                return s;
            }
        }
        s[size-1]='b';
        return s;
    }
};