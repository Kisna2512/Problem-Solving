// class Solution {
// public:
//     int numSubarrayBoundedMax(vector<int>& nums, int left, int right) {
        
//     //      int cnt=0;
//     //      for(int i=0;i<nums.size();i++)
//     //      {
//     //          int maxi=nums[i];
//     //           for(int j=i;j<nums.size();j++)
//     //           {
//     //               maxi=max(maxi,nums[j]);
//     //                if(maxi >=  left && maxi<= right)
//     //                {
//     //                    cnt++;
//     //                }
//     //           }
                
//     //      }
    
//     //    return cnt;
    


//     }
// };

class Solution {
    public int numSubarrayBoundedMax(int[] nums, int left, int right) {
        int count=0;
        int oldcount=0;
        int newcount=0;
        for(int i=nums.length-1;i>=0;i--){
           if(nums[i]>right){
               oldcount=newcount=0;
           }
           else if(nums[i]<left){
               newcount++;
           } 
           else{
               oldcount=newcount;
               oldcount++;
               newcount++;
           }
           count=count+oldcount;
        }
        return count;
    }
}
