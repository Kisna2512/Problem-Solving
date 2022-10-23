class Solution {
public:
    int mod=1e9;
    int subarrayGCD(vector<int>& nums, int k) {
        
        int n=nums.size();
      
        int scnt=0;
         for (int i = 0; i < n; i++) 
        {
              int result=nums[i];
            for (int j = i; j < n; j++) 
            {
                 
                 result=__gcd(result,nums[j]);
                if(result==k)
                {
                    scnt++;
                }
                if( result < k)
                {
                    break;
                }
                 
            }
              
             
        }
        
        return scnt;
    }
};