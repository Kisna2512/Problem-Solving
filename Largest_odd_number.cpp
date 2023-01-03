class Solution {
public:
    string largestOddNumber(string num) {
        int right=num.size()-1;
        string ans="";
        int i=-1;
        while(right)
        {
            int x=num[right]-'0';
            if(x&1)
            {
               i=right;
               break;
            }
            right--;
        }
        if(i==-1)
        {
            if((num[0]-'0')%2!=0)
            {
                ans+=num[0];
                return ans;
            }
        }
       

        if(i==-1)
        {
            return "";
        }



       for(int j=0;j<=i;j++)
       {
           ans+=num[j];
       }   

         return ans;
    }
};
