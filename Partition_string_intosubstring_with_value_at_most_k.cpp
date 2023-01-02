class Solution {
public:
    int minimumPartition(string s, int k) {
       
        
       
        
        int n=s.size();
        int ans=0;
        long long val=0; 
        int i=0;
        while(i < n){
            
            
            while(i < n && val*10 +(s[i]-'0') <= k)
            {
                val=val*10+(s[i]-'0');
                i++;
            }
            if(val==0)
            {
                return -1;
            }
          
            ans++;
            val=0;  
        }
        
        return ans;
    
    }
};
