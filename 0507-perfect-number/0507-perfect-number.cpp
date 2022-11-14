class Solution
{
    public:
        bool checkPerfectNumber(int num)
        {
           if(num==1){return false;}
            int sum = 1;
                  int n=num;
            for (int i = 2; i < n; i++)
            {
                if(num%i==0)
                {
                    
                        sum+=i;
                         sum += (num/i);
                    n=num/i;
                   
                }
            }
         
            return sum == num ;
        }
};