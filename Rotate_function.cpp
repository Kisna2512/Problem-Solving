class Solution {
public:

    int maxRotateFunction(vector<int>& nums) {
        
       
       int sum=0;
       int totalSum=0;

     int n=nums.size();
      for(int i=0;i<nums.size();i++)
      {
         sum+=nums[i];
         totalSum+=(i*nums[i]);
      }

      int curr=totalSum;
      int k=n-1;
    
      for(int i=1;i<n;i++)
      {  
        //   At each time the index is incresing for index 0 we have to subtract
          curr=curr+(sum-nums[k])-(nums[k]*(n-1));
          totalSum=max(totalSum,curr);
          k--;
      }
        return totalSum;
    }
};
