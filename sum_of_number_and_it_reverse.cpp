class Solution {
public:
    
    int reverseDig(int x)
    {
        int rem;
        int ans=0;
        while(x!=0)
        {
            rem=x%10;
            ans=ans*10+rem;
            x/=10;
        }
        
        return ans;
    }
    
    bool sumOfNumberAndReverse(int num) {
        if(num==0)
        {
            return true;
        }
        for(int i=0;i<num;i++)
        {
            if(i+reverseDig(i)==num)
            {
                return true;
            }
        }
        return false;
    }
};
