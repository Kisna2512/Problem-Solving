class Solution {
public:
    int mod = 1000000007;
//     int fun1(int i,int st,int ed,int &cnt,int k)
//     {
//         if(i >= k || st >= ed)
//         {
          
//             return;
//         }
       
//         if(i==k && st==ed)
//         {
//              cnt=(cnt+1)%mod; 
         
//         }
           
        
//        fun1(i+1,st-1,ed,cnt,k);
//            fun1(i+1,st+1,ed,cnt,k);
//         // k+=1;
//         // st=st-1;
        
//     }
     int fun(int st,int ed,int &cnt,int k,vector<vector<int>> &dp)
    {
        if(k == 0 && st != ed)
        {
            return 0;
        }
        
        if(k==0 && st==ed)
        {
            return 1;
        }
          int ind;
        if(st<0){
            ind = 1000+st;
        }
        else{
            ind = st;
        }
        if(dp[ind][k] != -1){
            // ways = (ways+dp[st][k])%mod;
            return dp[ind][k];
        }
        
        
        // k+=1;
        // st=st-1;
         int ans=0;
       ans=(ans+fun(st+1,ed,cnt,k-1,dp))%mod;
       ans=(ans+fun(st-1,ed,cnt,k-1,dp))%mod;
         
    return dp[st][k]=ans;
        
    }
//     void fun(int st,int ed,int &cnt,int k)
//     {
//         if(k <= 0 && st != ed)
//         {
//             return;
//         }
        
//         if(k==0 && st==ed)
//         {
//             cnt=(cnt+1)%mod;
//             return;
//         }
        
//         fun(st+1,ed,cnt,k-1);
//         // k+=1;
//         // st=st-1;
//         fun(st-1,ed,cnt,k-1);
         
    
        
//     }
    
    
    
    int numberOfWays(int startPos, int endPos, int k) {
        int cnt=0;
        vector<vector<int>> dp(20001,vector<int>(k+1,-1));
       // fun(startPos,endPos,cnt,k,dp);
       //  return cnt;
         startPos += 1000;
        endPos += 1000;
        return fun(startPos,endPos,cnt,k,dp);
    }
};
