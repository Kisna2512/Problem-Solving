class Solution {
public:
    vector<int> diStringMatch(string s) {
        
        int n=s.size();
        
       vector<int> ans;
        
    int l=0;
        int r=n;
        
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='I')
            {
                ans.push_back(l);
                l++;
            }else
            {
                ans.push_back(r);
                r--;
            }
        }
        ans.push_back(r);
        
        return ans;
        
        
        
    }
};