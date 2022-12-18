class Solution {
public:
    int similarPairs(vector<string>& words) {
        
        
        
        int ans=0;
        
        
        for(int i=0;i<words.size();i++)
        {
            
            
            set<char> st;
            for(auto it:words[i])
            {
                st.insert(it);
            }
            
            for(int j=i+1;j<words.size();j++)
            {
                set<char> st1;
            for(auto it:words[j])
            {
                st1.insert(it);
            }
            
                if(st==st1)
                {
                    ans++;
                }
            }
           
            
        }
        
        return ans;
         
    }
};
