class Solution {
public:
    string makeGood(string s) {
        
        string ans="";
        
        stack<int> st;
        
        for(int i=0;i<s.size();i++)
        {
            if(!st.empty() && (st.top()-'a'==s[i]-'A' || st.top()-'A'==s[i]-'a'))
            {
                st.pop();
            }else
            {
                st.push(s[i]);
            }
        }
        
        while(!st.empty())
        {
            char ch=st.top();
            st.pop();
            ans=ch+ans;
        }
        
        return ans;
    }
};