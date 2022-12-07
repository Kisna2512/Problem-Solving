class Solution {
public:
    string replaceDigits(string s) {
         
         string ans="";

         for(int i=0;i<s.size();i++)
         {
             if(s[i] >= 48 && s[i] <= 57)
             {
                ans+=(s[i-1]-'a'+s[i]-'0')+'a'; 
             }else
             {
                 ans+=s[i];
             }
            
         }
      return ans;
    }
};
