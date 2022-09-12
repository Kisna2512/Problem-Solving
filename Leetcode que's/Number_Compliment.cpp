class Solution {
public:
    int findComplement(int n) {
        int ans=0;
        int i=0;
        while(n > 0)
        {
            if(!(n&1))
            {
                ans+=pow(2,i);
            }
            i++;
            n=n>>1;
        }
        return ans;
    }
};
