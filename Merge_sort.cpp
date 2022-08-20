#include <iostream>
#include<vector>
using namespace std;

void merge(int low,int high,int arr[])
{
    

   int i=low;
   int mid=(low+high)/2;
   int j=mid+1;
   vector<int> v;

   while(i<=mid and j<=high)
   {
   	if(arr[i]<=arr[j])
   	{
      v.push_back(arr[i++]);
   	}
   	else
   	{
   		v.push_back(arr[j++]);
   	}
   }

   while(i<=mid)
   {
   	 v.push_back(arr[i++]);
   }
   while(j<=high)
   {
   	v.push_back(arr[j++]);
   }
   int k=0;
   for(int i=low;i<=high;i++)
   {
   	arr[i]=v[k++];
   }
   return;

}

void merge_sort(int low,int high,int arr[])
{
	if(low >= high)
	{
		return;
	}
	int mid=(low+high)/2;
	merge_sort(low,mid,arr);
	merge_sort(mid+1,high,arr);

	merge(low,high,arr);
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

merge_sort(0,n-1,arr);

cout<<"After sorting:- "<<endl;
for(int i=0;i<n;i++)
{
	cout<<arr[i]<<" ";
}cout<<endl;



    return 0;
}