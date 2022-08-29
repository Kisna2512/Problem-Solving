// Link:https://leetcode.com/problems/counting-bits/
class Solution {
public:
    
    int Countbit(int n)
    {
        int cnt=0;
        while(n != 0 )
        {
            cnt+=n&1;
            n=n>>1;
        }
        return cnt;
    }
   
    vector<int> countBits(int n) {
        vector<int> arr(n+1);
       for(int i=0;i<=n;i++)
       {
           arr[i]=Countbit(i);
       }
        return arr;
    }
};
