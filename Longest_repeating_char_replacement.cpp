class Solution {
public:
// Intuition:replaceableChar=windowSize-maxCnt
    int characterReplacement(string s, int k) {
        int res=0;
        vector<int> freq(26,0);
        int left=0;
        int right=0;
         int maxi=0;
         while(right < s.size())
         {
             freq[s[right]-'A']++;
             int currfreq=freq[s[right]-'A'];
             maxi=max(maxi,currfreq);
             while(right-left+1-maxi > k)
             {
                 freq[s[left]-'A']--;
                 left++;
             }
             res=max(res,right-left+1);
             right++;
         }

    return res;

    }
};
