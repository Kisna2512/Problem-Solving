class Solution {
public:
    string reverseParentheses(string s) {
        
          string ans="";
          stack<string> st;


          for(auto ch:s)
          {
              if(ch=='(')
              {
                  st.push(ans);
                  ans="";
              }else if(ch==')')
              {
                  reverse(ans.begin(),ans.end());
                  ans=st.top()+ans;
                  st.pop();
                  
              }else
              {
                  ans+=ch;
              }
          }


     return ans;




    }
};
