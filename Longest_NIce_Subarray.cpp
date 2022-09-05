class Solution {
public:
    int longestNiceSubarray(vector<int>& nums) {
        int cnt=0;
        int left=0;
        int res=0;
        for(int i=0;i<nums.size();i++)
        {
            while(left <= i && cnt&nums[i])
            {
                // We Deleting left side Which Have not 0 After logical And
                cnt=cnt^nums[left];
                left++;
            }
            
            res=max(res,i-left+1);
            //Adding to Subarray
            cnt=cnt | nums[i];
            
            
            
        }
        
        return res;
        
        
        
        
        
    }
};
