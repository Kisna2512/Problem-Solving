link:-https://leetcode.com/problems/convert-a-number-to-hexadecimal/

class Solution {
public:
    string toHex(int n) {
        if(n==0)
        {
            return "0";
        }
      const  int hex=16;
        string h="0123456789abcdef";
        string ans;
        unsigned int num=n;
       while(num)
       {
           ans=h[num%hex]+ans;
           num/=hex;
       } 
        return ans; 
    }
};




