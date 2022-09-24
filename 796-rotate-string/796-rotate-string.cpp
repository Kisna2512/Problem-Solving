class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s==goal)
        {
            return true;
        }
        
        
        for(int i = 0; i<s.size(); i++){
            if(s!=goal){
               s = s+s[0];
               s.erase(0, 1);
            }
            else{
                return 1;
            }
        }
        
        return 0;
        
        
        
        
        
    }
};