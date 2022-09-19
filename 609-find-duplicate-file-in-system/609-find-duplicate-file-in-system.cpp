class Solution {
public:
    vector<vector<string>> findDuplicate(vector<string>& paths) {
        
        unordered_map<string,vector<string>> mp;
        
        for(int i=0;i<paths.size();i++)
        {
            string ans="";
            
            int j=0;
            int m=paths[i].size();
                while(j < m && paths[i][j]!=' ')
                {
                    ans+=paths[i][j];
                    j++;
                }
            ans+='/';
            j=j+1;
                    while(j < paths[i].size())
                    {
                       string file="";
                        string content="";
                        while( j < m  && paths[i][j]!='(')
                        {
                           file+=paths[i][j];
                            j++; 
                        }
                        j++;
                        while( j < m  && paths[i][j]!=')')
                        {
                           content+=paths[i][j];
                            j++; 
                        }
                        j++;
                        j++;
                        mp[content].push_back(ans+file);
                        
                    }   
        }
        vector<vector<string>> ans;
        for(auto it:mp)
        {
            if(it.second.size() > 1)
            {
                ans.push_back(it.second);
            }
        }
        return ans;
        
        
        
        
        
        
        
    }
};