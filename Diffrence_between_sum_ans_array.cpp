class Solution {
public:

    int digitSum(int digit)
    {

          int sum=0;
          while(digit!=0)
          {
              sum+=(digit%10);
              digit/=10;
          }
 
          return sum;

    }



    int differenceOfSum(vector<int>& nums) {
        int sum=0;
        int digiSum=0;
        for(auto it:nums)
        {
            sum+=it;
            digiSum+=digitSum(it);
        }

        return abs(sum-digiSum);
    }
};
