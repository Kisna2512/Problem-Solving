class Solution {
    public int minFlipsMonoIncr(String s) {
        int count1=0;
        int countFlip=0;
        for(int i=0;i<s.length();i++)
        {
            if(s.charAt(i)=='1')
            count1++;
            if(s.charAt(i)=='0')
            {
                if(count1>0)
                countFlip++;
            }
            if(count1<countFlip)
            {
                countFlip=count1;
            }
        }
        return countFlip;
    }
}
