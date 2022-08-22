class Solution {
public:
    vector<int> minOperations(string s) {
        
        vector<int> ans;
        
        for(int i=0;i<s.size();i++)
        {
            int sum=0;
            for(int j=0;j<s.size();j++)
            {
                if(s[j]=='1')
                {
                    sum+=abs(i-j);
                }
                
               
                if(s[j] > '1')
                {
                     int x=s[j]-'0';
                    while(x--)
                    {
                        sum+=x;
                    }
                }
            }
            ans.push_back(sum);
        }
  
        return ans;
    }
};
