class StockSpanner {
public:
    
    vector<int> res;
    StockSpanner() {
        res.clear();
    }
    
    int next(int price) {
        int ans=0;
        
        res.push_back(price);
        for(int i=res.size()-1;i >= 0 ;i--)
        {
            if(res[i] <= price)
            {
                ans++;
            }else
            {
                break;
            }
        }
        
        return ans;
    }
};


/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */