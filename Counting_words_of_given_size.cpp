class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        
       int cnt=0;
        for(auto it:words)
        {

           string temp=it;
           int c=0;
           while(c < temp.size() && pref[c]==temp[c])
           {
               c++;
               if(c==pref.size())
               {
                   cnt++;
               }
           }
        }

        return cnt;
    }
};
