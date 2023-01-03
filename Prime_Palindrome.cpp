class Solution {
public:

    bool isPalindrome_(int n)
    {
        if(n < 10)
        {
            return true;
        }
        string a=to_string(n);
        int i=0;
        int j=a.size()-1;
        while(i <= j )
        {
            if(a[i]!=a[j])
            {
                return false;
            }
            i++;
            j--;
        }
        return true;
    }

    bool isPrime(int n)
    {
        if(n <= 1)
        {
            return false;
        }

        for(int i=2;i*i<=n;i++)
        {
            if(n%i==0)
            {
                return false;
            }
        }

        return true;
    }


    int primePalindrome(int n) {
        if(n==1){return 2;}
        if (99899*1e2 <= n && n <= 1e8)
        {
             return 100030001;
        }
       
        for(long long i=n;i<1e7;i++)
        {
            if(isPrime(i) && isPalindrome_(i))
            {
                return i;
            }
        }
        return -1;
    }
};
