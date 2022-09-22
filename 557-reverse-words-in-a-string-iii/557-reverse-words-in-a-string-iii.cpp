class Solution {
public:
     void reverse(string &s)
    {
        int l=0;
        int r=s.size()-1;
        while(l<=r)
        {
            swap(s[l++],s[r--]);
        }

    }
    string reverseWords(string s) {
        int j=0;
        string ans="";
         string temp="";
        while(j < s.size())
        {
            while(s[j]!=' '&& j < s.size())
            {
                temp+=s[j++];
            }   
            reverse(temp);
            if(ans.size()==0){ans+=temp; temp="";}
            else{
            ans+=" "+temp;
            temp="";
            }  
         j++;
        }
        return ans;
    }
};