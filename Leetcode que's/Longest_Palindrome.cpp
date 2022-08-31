// Link: https://leetcode.com/problems/longest-palindrome/
class Solution {
public:
    int longestPalindrome(string s) {
        
        vector<int> mp(128,0);
        
        for(int i=0;i<s.size();i++)
        {
            mp[s[i]]++;
        }
        
        int result=0;
        for(int i=0;i<mp.size();i++)
        {
            result+=(mp[i]/2)*2;
            if(result%2==0 && mp[i]%2==1)
            {
                result+=1;
            }
        }
        return result;
        
        
        
    }
};
