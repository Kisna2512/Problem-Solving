class Solution {
public:
    int isPrefixOfWord(string sentence, string searchWord) {
        


            string temp="";
            int ans=0;
            int cnt=0;
            bool flag=false;
            for(int i=0;i<sentence.size();i++)
            {
                if(sentence[i]==' ')
                {
                    continue;
                }

               while(i < sentence.size() && sentence[i]!=' ')
               {
                   temp+=sentence[i];
                   i++;
               }


               int c=0;
               int j=i;
               while(c < temp.size() && c < searchWord.size() && temp[c]==searchWord[c])
               {
                   c++;
                   if(c==searchWord.size() && !flag)
                   {
                      ans=cnt;
                      flag=true;
                   }
               }
               temp="";
               cnt++;

            }

         if(ans==0 && !flag) return -1;
         return (ans+1);




    }
};
