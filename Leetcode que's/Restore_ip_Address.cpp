class Solution {
public:
    
   void fun(string s,string temp,int ind,int dots,vector<string> & ans)
   {
        if(dots==4)
        {
            if(ind >= s.length())
            {
                temp.pop_back();
                ans.push_back(temp);
            }
            return;
        }
       
       
       string ip;
       
       for(int i=ind;i<s.length();i++)
       {
           if(ip=="0")
           {
               return;
           }
           ip=ip+s[i];
           if(stoi(ip) >=0 and stoi(ip) <= 255)
           {
               string x=temp;
               temp=temp+ip+".";
               fun(s,temp,i+1,dots+1,ans);
               temp=x;
               
           }
           else if(stoi(ip) > 255)
           {
               return;
           }
       }  
   }
  
    vector<string> restoreIpAddresses(string s) {
        
        vector<string> ans;
        string temp;
        fun(s,temp,0,0,ans);
        return ans;
    }
};
