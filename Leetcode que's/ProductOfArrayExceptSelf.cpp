//Link:https://leetcode.com/problems/product-of-array-except-self/

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
      
        int n=nums.size();
        vector<int> ans(n,0);
        
        int mul = 1;
        int zero=0;
        for (int i = 0; i < nums.size(); i++)
        {
            if(nums[i]!=0)
            {
                 mul =mul* nums[i];
            }
            else
            {
                zero++;
            }
            
            if(zero > 1)
            {
                return ans;
            }
           
        }

        for (int i = 0; i < nums.size(); i++)
        {
             if(nums[i]==0)
            {
                 ans[i]=mul;
            }
             else
             {
                  if (zero==1)
                  {
                    ans[i]=0;
                  }
                  else
                  {
                     int x = (mul / nums[i]);
                     ans[i]=x;
                  }
                 
           }
        }

        return ans;
    
    }
};
