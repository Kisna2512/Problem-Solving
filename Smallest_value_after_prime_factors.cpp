class Solution {
public:
    
    
   vector<int> primes(int n)
{
    vector<int> v;
   int c=2;
    while(n>1)
    {
        if(n%c==0){
       v.push_back(c);
        n/=c;
        }
        else
        {
            c++;
        }
    }
       
       return v;
        
}
    
   
    int smallestValue(int n) {
        
        int x=-1;
        
        while(n != x)
        {
            x=n;
            vector<int> temp=primes(n);
            
            if(temp.size()==0)
            {
                break;
            }
            
            
            int sum=0;
            for(auto it:temp)
            {
                sum+=it;
            }
            
            
            n=sum;
            
            
            
            
        }
        
        
        
        
        
        
        return n;
        
        
        
        
        
        
        
        
        
    }
};
