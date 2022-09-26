class Solution {
public:
    
    // find function will return the representative of a set
    
    int find(vector<int>& parent, int x)
    {
        if(parent[x] == x)
            return x;
        
        parent[x] = find(parent, parent[x]);
        
        return parent[x];
    }
    
    // union function will merge two sets
    
    void unionn(int x, int y, char sign, vector<int>& parent, vector<int>& rank)
    {
        // find the representative of x
        
        int par_x = find(parent, x);
        
        // find the representative of y
        
        int par_y = find(parent, y);
        
        // merge two sets
        
        if(sign == '=')
        {
            if(rank[par_x] < rank[par_y])
            {
                parent[par_x] = par_y;
            }
            else if(rank[par_y] < rank[par_x])
            {
                parent[par_y] = par_x;
            }
            else
            {
                parent[par_y] = par_x;
                
                rank[par_x]++;
            }
        }
    }
    
    bool equationsPossible(vector<string>& equations) {
        
        int n = equations.size();
        
        // declare a parent array
        
        vector<int> parent(26);
        
        // declare a rank array
        
        vector<int> rank(26);
        
        // initialize parent and rank array
        
        for(int i = 0; i < 26; i++)
        {
            parent[i] = i;
            
            rank[i] = 0;
        }
        
        // take union
        
        for(int i = 0; i < n; i++)
        {
            int x = equations[i][0] - 'a';
            
            int y = equations[i][3] - 'a';
            
            char sign = equations[i][1];
            
            unionn(x, y, sign, parent, rank);
        }
        
        // now check which equation is not satisfying the condition
        
        for(int i = 0; i < n; i++)
        {
            int x = equations[i][0] - 'a';
            
            int y = equations[i][3] - 'a';
            
            char sign = equations[i][1];
            
            // find representative of x
            
            int par_x = find(parent, x);
            
            // find representative of y
            
            int par_y = find(parent, y);
            
            if(sign == '=' && par_x != par_y)
            {
                return false;
            }
            
            if(sign == '!' && par_x == par_y)
            {
                return false;
            }
        }
        
        return true;
    }
};