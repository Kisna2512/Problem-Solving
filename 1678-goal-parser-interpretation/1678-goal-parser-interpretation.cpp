class Solution
{
    public:
        string interpret(string s)
        {

            string ans = "";

            for (int i = 0; i < s.size(); i++)
            {
                
               if(s[i]!='(' && s[i]!=')'){
                   ans+=s[i];
               }else if(s[i]=='(' && s[i+1]==')')
               {
                   ans+='o';
               }
                   
              
                
            }
            return ans;
        }
};