class Solution {
public:
    string addSpaces(string s, vector<int>& spaces) {
         string ans="";
         set<int> st;
         for(auto it:spaces)
         {
             st.insert(it);
         }
         for(int i=0;i<s.size();i++)
         {
             
             if(st.find(i)!=st.end())
             {
                  ans+=' ';
             }
             ans+=s[i];   
         }
       return ans;
    }
};
