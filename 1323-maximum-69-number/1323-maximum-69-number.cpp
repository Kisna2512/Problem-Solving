class Solution {
public:
    int reverse(int num)
    {
        
        int ans=0;
        while(num > 0)
        {
         
            ans=ans*10+num%10;
         
            num/=10;
        }
        
        return ans;
        
        
    }
    int maximum69Number (int num) {
        
        
        int digit=0;
        int n=reverse(num);
      cout<<n<<" ";
        bool flag=true;
        while(n > 0)
        {
            if(n%10==6 && flag==true)
            {
                n+=3;
                flag=false;
            }
            digit=digit*10+n%10;
          
            n/=10;
            
        }
        
        
        reverse(digit);
        
        return digit;
        
    }
};