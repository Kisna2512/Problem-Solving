class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        
        
        int ans=0;
        
        for(int i=0;i<arr.size();i++)
        {
            for(int j=i;j<arr.size();j++)
            {
                for(int k=i;k<=j;k++)
                {
                    int size=(j-i+1);
                    if(size&1)
                    {
                        ans+=arr[k];
                    }
                }
            }
        }
        
        return ans;
        
    }
};