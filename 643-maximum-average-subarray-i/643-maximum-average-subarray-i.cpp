class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double maxi=INT_MIN,sum=0,avg=0;
        int n=nums.size();
        int i=0,j=0;
        while(j < n)
        {
            if(j < k)
            {
                sum+=nums[j];
                j++;
                if(j==k)
                {
                    avg=sum/k;
                    maxi=max(avg,maxi);
                }
            }
            else
            {
                sum+=nums[j]-nums[i];
                i++;
                j++;
                avg=sum/k;
                maxi=max(avg,maxi);
            }
        }
        return maxi;  
    }
};