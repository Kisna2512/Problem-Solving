class Solution {
public:
    int smallestEvenMultiple(int n) {
        if(!(n&1))
        {
            return n;
        }
        return (n*2);
    }
};