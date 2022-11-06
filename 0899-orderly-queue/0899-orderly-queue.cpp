class Solution {
public:
    string orderlyQueue(string s, int k) {
        
        if(k > 1)
        {
            sort(s.begin(),s.end());
            return s;
        }else
        {
            string mini=s;
            
            for(int i=0;i<s.size();i++)
            {
                s=s.substr(1)+s[0];
                if(s.compare(mini) < 0)
                {
                    mini=s;
                }
            }
             return mini;
            
        }
        
        
       
        
        
        
        
    }
};