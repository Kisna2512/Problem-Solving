class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        int cnt=1;
        vector<string> ans;
        for(auto it:target)
        {
            while(cnt < it)
            {
                ans.push_back("Push");
                ans.push_back("Pop");
                cnt++;
            }
           
           ans.push_back("Push");
           cnt++;

        }
        return ans;
    }
};