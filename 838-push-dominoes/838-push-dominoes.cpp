class Solution {
public:
    string pushDominoes(string s) {
        queue<pair<int,char>> q;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='.')
            {
                continue;
            }
            q.push({i,s[i]});
        }
        while(!q.empty())
        {
            auto it=q.front();
            q.pop();
            int i=it.first;
            if(it.second=='L' && i > 0 && s[i-1]=='.')
            {
                s[i-1]='L';
                q.push({i-1,s[i-1]});
            }else if(it.second=='R' && i+1 < s.size() &&  s[i+1]=='.')
            {
                if(s[i+2]=='L'  && i+2 < s.size())
                {
                    q.pop();
                }else{
                     s[i+1]='R';
                q.push({i+1,s[i+1]});
                }
               
            }
        }
        return s; 
    }
};