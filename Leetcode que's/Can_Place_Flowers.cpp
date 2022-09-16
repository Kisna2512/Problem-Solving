class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int cnt=0;
        int m=flowerbed.size();
        for(int i=0;i<flowerbed.size();i++)
        {
            if(flowerbed[i]==0)
            {
                int left;
                if(i==0)
                {
                    left=0;
                }else
                {
                    left=flowerbed[i-1];
                }
                
               int right;
                if(i==m-1)
                {
                    right=0;
                }else
                {
                    right=flowerbed[i+1];
                }
               
                if(left==0 && right==0)
                {
                    cnt++;
                    flowerbed[i]=1;
                }
            }
        }
        
        if(cnt>=n)
        {
            return true;
        }
        return false;
    }
};
