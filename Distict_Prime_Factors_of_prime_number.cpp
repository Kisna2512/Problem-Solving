class Solution {
public:
    
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
    
vector<int> primeFactors(int n)
{
    vector<int> ans;
    while (n % 2 == 0)
    {
        ans.push_back(2);
        n = n/2;
    }
 
    
    for (int i = 3; i <= sqrt(n); i = i + 2)
    {
        
        while (n % i == 0)
        {
            ans.push_back(i);
            n = n/i;
        }
    }
 
  
    if (n > 2)
        ans.push_back(n);
    
    return ans;
}
 
    
    int distinctPrimeFactors(vector<int>& nums) {
        set<int> st;
        for(auto it:nums)
        {
            if(isPrime(it))
            {
                st.insert(it);
            }else
            {
            vector<int> ans=primeFactors(it);
            for(auto s:ans)
            {
                st.insert(s);
            }
            }
            
           
            
        }
        return st.size();
    }
};
