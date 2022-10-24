class Solution {
public:
    int fillCups(vector<int>& amount) {
        
        priority_queue<int> pq;
        
        for(auto it:amount)
        {
            pq.push(it);
        }
        int ans=0;
        while(!pq.empty())
        {
            int first=pq.top();
            pq.pop();
            
            int second=pq.top();
            pq.pop();
            
            
            
            if(first==0 && second==0)
            {
                break;
            }
            
            
            pq.push(first==0 ? first:first-1);
            pq.push(second==0 ? second:second-1);
            
            ans++;
            
            
            
            
        }
        
        
        
        
       return ans; 
        
        
    }
};



// amount[0]->cold
// amoount[1]->warm
// amount[2]->hot water

