class Solution {
public:
    string reverseVowels(string s) {
        unordered_map<char,int> mp;
        
        mp['a']=1;
        mp['e']=2;
        mp['i']=3;
        mp['o']=4;
        mp['u']=5;
        
        mp['A']=6;
        mp['E']=7;
        mp['I']=8;
        mp['O']=9;
        mp['U']=10;
        int n=s.size();
        int i=0;
        int j=n-1;
        while(i<j)
        {
            if(mp.find(s[i])==mp.end() )
            {
               i++;
            }else if(mp.find(s[j])==mp.end() )
            {
                j--;
            }
            else
            {
                swap(s[i],s[j]);
                i++;
                j--;
            }
           
        }
        
        return s;
        
        
        
    }
};
