#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        unordered_map<int,int> mp;
        
        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]]=0;
        }
        vector<int> v;
        int curr=0;
        bool flag=false;
        int maxi=0;
        for(int i=0;i<nums.size();i++)
        {
           if(!flag)
           {
              cout<<nums[i]<<endl;
              curr+=nums[i];  
               flag=true;
           }
               if(mp[nums[i]] == 0)
               {
                  cout<<nums[i]<<endl;
               	  curr+=nums[i]; 
               	  v.push_back(nums[i]);
                  mp[nums[i]]++; 
               }
               else
               {
               	curr-=nums[i];
               }
             
             if(curr < 0)
             {
             	curr=0;
             }
            
            
        }
        
        int sum=0;
        for(auto it:v)
        {
        	sum+=it;
        }
        return sum;
        
        
    }
};

int main()
{

  #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

  Solution obj;
   vector<int> nums;

   int n;
   cin>>n;

   for (int i = 0; i < n; i++)
   {
   	int x;
   	cin>>x;
   	nums.push_back(x);
   }

   cout<<obj.maximumUniqueSubarray(nums)<<endl;


    return 0;
}