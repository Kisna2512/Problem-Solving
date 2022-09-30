class Solution {
public:
    int countSegments(string s) {
        int cnt=0;
        for(int i=0;i<s.size();i++)
        {
             if (s[i] != ' ' && s[i+1] == ' ' || s[i] != ' ' && s[i+1] == '\0'){
            cnt++;
        }
        }
       
        return cnt;    
    }
};