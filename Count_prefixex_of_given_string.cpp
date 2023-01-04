class Solution {
public:
    int countPrefixes(vector<string>& words, string s) {
        int cnt=0;
           for(int i=0;i<words.size();i++)
           {
                string temp=s;
               int c=0;
               while(c < temp.size() && words[i][c]==temp[c])
               {
                   c++;
               if(c==words[i].size())
               {
                   cnt++;
               }

               }

           }

          



     return cnt;



    }
};
