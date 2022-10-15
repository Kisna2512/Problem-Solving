class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        
        int ans=0;
        int count5=0;
        int count10=0;
        for(int i=0;i<bills.size();i++)
        {
            if(bills[i]==5)
            {
                count5++;
            }else if(bills[i] == 10)
            {
                if(count5==0)
                {
                    return false;
                }else
                {
                    count5--;
                }
                count10++;
            }else
            {
                if(count5==0)
                {
                    return false;
                }else
                {
                    count5--;
                }
                if(count10!=0)
                {
                    count10--;
                }else
                {
                    if(count5 < 2)
                    {
                        return false;
                    }else
                    {
                        count5=count5-2;
                    }
                }
            }
        }
        return true;
    }
};