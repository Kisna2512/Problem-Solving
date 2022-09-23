class Solution {
public:
    int mod=1e9+7;
    int concatenatedBinary(int n) {
        
        long long int val=0;
        int i=1;
        while(i<=n)
        {
            val=((val << (1+int(log2(i))))%mod + i)%mod;
            i++;
        }
        
        
        
        return val;
        
        
        
    }
};