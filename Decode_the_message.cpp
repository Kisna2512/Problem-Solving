class Solution {
public:
    string decodeMessage(string key, string message) {
       unordered_map<char,char> mp;
      char ch='a';
       for(auto it:key)
       {
           if(it!=' ')
           {
              if(mp.find(it)==mp.end())
              {
                  mp[it]=ch++;
              }
           }
       }
    
      string ans="";

      for(auto it:message)
      {
          if(it==' ')
          {
              ans+=it;
          }
          else
          {
              ans+=mp[it];
          }
      }

   return ans;

    }
};
