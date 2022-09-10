class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        
        int total_cost=0;
        int total_fuel=0;
        int n=cost.size();
        
        for(int i=0;i<n;i++)
        {
            total_cost+=cost[i];
            total_fuel+=gas[i];
        }
        if(total_fuel<total_cost)
        {
            return -1;
        }
        int start=0;
        int coste=0;
        for(int i=0;i<n;i++)
        {
            if(coste < 0)
            {
                start=i;
                coste=0;
            }
            
            coste+=(gas[i]-cost[i]);
        }
        
        
        
        return start;
        
        
        
    }
};
