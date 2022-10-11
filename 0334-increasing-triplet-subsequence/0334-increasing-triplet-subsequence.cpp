class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        
      
        int left=INT_MAX;
        int right=INT_MAX;
        for(int i=0;i<nums.size() ;i++)
        {
           
            if(nums[i] <= left)
            {
                left=nums[i];
            }
            else if(nums[i] <= right)
            {
                right=nums[i];
            }
            else
            {
                return true;
            }
        
        }
        
      
      return false;  
        
        
    }
};