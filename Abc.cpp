class Solution {
public:
    int getMaxLen(vector<int>& nums) {
        int pos=0;
        int neg=0;
        int res=0;

        for(int i=0;i<nums.size();i++)
        {


             if(nums[i] > 0)
             {
                 pos++;
                 if(neg==0)
                 {
                     neg=0;
                 }else
                 {
                     neg=neg+1;
                 }
             }else if(nums[i] < 0)
             {
                 int temp=pos+1;
                 if(neg==0)
                 {
                     pos=0;
                 }else
                 {
                     pos=neg+1;
                 }
                 neg=temp;
             }else
             {
                 pos=0;
                 neg=0;
             }

             res=max(res,pos);


        }
       return res;

    }
};
