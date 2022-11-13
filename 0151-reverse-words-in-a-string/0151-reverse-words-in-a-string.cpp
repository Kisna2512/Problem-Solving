class Solution {
public:
    string reverseWords(string s) {
        
        
        stack<string> st;
        
        
        for(int i=0;i<s.size();i++)
        {
            string word="";
            
            if(s[i]==' ')
            {
                continue;
            }
            
            while(s[i]!=' ' && i < s.size())
            {
                word+=s[i];
                i++;
            }
            
            st.push(word);
        }
        
        
        string rev="";
        
        while(!st.empty())
        {
            rev=rev+st.top();
            st.pop();
            if(!st.empty())
            {
                rev+=" ";
            }
            
        }
        
        
        return rev;
        
        
        
        
        
        
        
        
        
    }
};