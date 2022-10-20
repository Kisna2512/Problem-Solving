class Solution {
public:
    string convert(string s, int nR) {
        
        
        int n=s.size();
        int i=0;
        vector<string> v(nR);
        while(i < n)
        {
            for(int j=0;j<nR && i < n ;i++,j++)
            {
                v[j]+=s[i];
                
            }
            
            for(int j=nR-2;j > 0 && i<n; i++ ,j--)
            {
                v[j]+=s[i];
            }
        }
         s.clear();
        for(auto it:v)
        {
            s+=it;
        }
       
        return s;
    }
};