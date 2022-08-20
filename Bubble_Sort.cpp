#include<bits/stdc++.h>

using namespace std;



void bubble_sort(int arr[],int n)
{
	int cnt=0;

	while(cnt < n)
	{
		for(int i=0;i<n;i++)
		{
			if(arr[i] > arr[i+1])
			{
				swap(arr[i],arr[i+1]);
			}
		}
		cnt++;
	}
}



void printArr(int arr[],int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}cout<<endl;
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

for (int i = 0; i < n; i++)
{
	cin>>arr[i];
}

printArr(arr,n);
bubble_sort(arr,n);
printArr(arr,n);






    return 0;
}