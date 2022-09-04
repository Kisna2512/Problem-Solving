class Solution {
public:
    bool checkDistances(string s, vector<int>& distance) {
        unordered_map<char,int> mp;
        
        for(int i=0;i<s.size();i++)
        {
            for(int j=i+1;j<s.size();j++)
            {
                if(s[i]==s[j])
                {
                    
                    if(j-i-1!=distance[s[i]-'a'])
                    {
                       
                        return false;
                    }
                }
            }
        }
        
        return true;
    }
};
