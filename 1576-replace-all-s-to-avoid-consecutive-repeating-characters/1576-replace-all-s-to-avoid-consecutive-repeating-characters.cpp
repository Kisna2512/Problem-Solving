class Solution {
public:
    string modifyString(string s) {
        
        
         int n=s.size();
        string x="abcdefghijklmnopqrstuvwxyz";
        int len=x.size();

        for(int i=0;i<n;i++)
        {
            if(i==0){
                if(s[i]=='?'){
                    for(int j=0;j<len;j++){
                        if(s[i+1]!=x[j]){
                        s[i]=x[j];
                        break;
                        }
                    }

                }
            }
            else if(i==n-1){
                if(s[i]=='?'){
                    for(int j=0;j<len;j++){
                        if(s[i-1]!=x[j]){
                        s[i]=x[j];
                        break;
                        }
                    }
                }
            }

            else
            {
                if(s[i]=='?'){
                for(int j=0;j<len;j++){
                    if(s[i-1]!=x[j] && s[i+1]!=x[j]){
                    s[i]=x[j];
                    break;
                        }
                    }
                }
            }
        }
        return s;
        
        
        
        
        
        
    }
};