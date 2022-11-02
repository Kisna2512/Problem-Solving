//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
vector<int> find(int arr[], int n , int x )
{
    vector<int> ans;
    
    
    int first=-1;
    int last=-1;
    
    bool flag1=false;
    bool flag2=false;
   
    int i=0;
    
    while(i < n)
    {
        
        if(arr[i]==x && !flag1)
        {
            first=i;
            flag1=true;
        }
        
        if(arr[i]==x && flag1==true)
        {
            last=i;
        }
        
        
        i++;
         
    }
    
    
    
    
    
    
    ans.push_back(first);
    ans.push_back(last);
    
    
    
    
    return ans;
    
    
    
}

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int arr[n],i;
        for(i=0;i<n;i++)
        cin>>arr[i];
        vector<int> ans;
        ans=find(arr,n,x);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}



// } Driver Code Ends