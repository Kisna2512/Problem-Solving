class Solution {
public:
    int minStartValue(vector<int>& nums) {
        
        int result=0;
        int sum=0;
        for(auto it:nums)
        {
            result=min(result,sum+=it);
        }
        return abs(result-1);
    }
};