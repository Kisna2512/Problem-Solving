#include<bits/stdc++.h>

using namespace std;


void generate_subset(int arr[],int n,vector<int> ans,int ind)
{
	if(ind==n)
	{
		cout<<"[";
		for(auto it:ans)
		{
			cout<<it<<" ";
		}cout<<"]";cout<<endl;

		return;
	}

   ans.push_back(arr[ind]);
   generate_subset(arr,n,ans,ind+1);
   ans.pop_back();


   generate_subset(arr,n,ans,ind+1);



}






int main()
{

  #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif



   int n;
   cin>>n;

  int arr[n];

   for(int i=0;i<n;i++)
   {
   cin>>arr[i];
   }
   vector<int> ans;
   generate_subset(arr,n,ans,0);












    return 0;
}