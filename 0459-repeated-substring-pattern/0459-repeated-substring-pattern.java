class Solution {
    public boolean repeatedSubstringPattern(String s) {
        
        
        int len=s.length();
        
        for(int i=0;i<len/2;i++)
        {
            String substr=s.substring(0,i+1);
            
            if(len % substr.length() == 0)
            {
                int no=len/substr.length();
                StringBuilder temp=new StringBuilder();
                while(no > 0)
                {
                    temp.append(substr);
                    no--;
                }
                if(temp.toString().equals(s))
                {
                    return true;
                }
            }
        }
        
        return false;
        
    }
}