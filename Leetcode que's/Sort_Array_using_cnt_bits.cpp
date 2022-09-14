class Solution {
public:
    
    
    int cntbits(int n)
    {
        int ans=0;
        while(n)
        {
            ans+=n&1;
            n=n>>1;
        }
        return ans;
    }
 
    vector<int> sortByBits(vector<int>& arr) {
        
        
        vector<pair<int,int>> temp(arr.size());
        for(int i=0;i<arr.size();i++)
        {
            temp[i]={cntbits(arr[i]),arr[i]};
        }
        sort(temp.begin(),temp.end());
       
        for(int i=0;i<arr.size();i++ )
        {
            arr[i]=temp[i].second;
        }
        return arr;
        
        
        
    }
};
