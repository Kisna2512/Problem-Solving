class Solution {
public:
    bool checkIfPangram(string s) {
        
        map<char,int> mp;
           char ch='a';
        for(int i=0;i<s.size();i++)
        {
            mp[s[i]]++;
        }
       
         for(char ch='a';ch <= 'z';ch++)
         {
             if(mp.find(ch)==mp.end())
             {
                 return false;
             }
         }

    return  true;

    }
};