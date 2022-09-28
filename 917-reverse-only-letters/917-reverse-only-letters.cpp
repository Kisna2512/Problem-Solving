class Solution {
public:
    string reverseOnlyLetters(string s) {
     
        
        int i=0;
        int j=s.size()-1;
        
        while(i<=j)
        {
            if( isalpha(s[i]) && isalpha(s[j]) )
            {
                swap(s[i],s[j]);
                i++;
                j--;
            }
            else if(!isalpha(s[i]) && isalpha(s[j]))
            {
                 i++;
            }
            else if(isalpha(s[i]) && !isalpha(s[j]))
            {
                 j--;
            }else
            {
                i++;
                j--;
            }
           
        }
        
      return s; 
        
    }
};