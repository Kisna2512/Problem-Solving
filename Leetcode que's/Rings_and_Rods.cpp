class Solution {
public:
    int countPoints(string rings) {
        map<int,vector<char>> mp;
        for(int i=rings.size()-1;i > 0;i--)
        {
            mp[rings[i]-'0'].push_back(rings[i-1]);
        }
       
        int cnt=0;
        for(auto it:mp)
        {
        int cntR=0;
        int cntG=0;
        int cntB=0;
            for(auto i:it.second)
            {
                if(i=='R')
                {
                    cntR++;
                }
                
                if(i=='G')
                {
                    cntG++;
                 }
                
                if(i=='B')
                {
                    cntB++;
                }
            }
             if(cntG >0 && cntR > 0 && cntB > 0)
             {
                 cnt++;
             }
        }
        
        return cnt;  
    }
};
