#include<bits/stdc++.h>

using namespace std;


void bubble_sort(int arr[],int n)
{

   int cnt=0;
   while(cnt < n)
   {
      for (int i = 0; i < n; ++i)
      {
      	if(arr[i] > arr[i+1])
      	{
      		swap(arr[i],arr[i+1]);

      	}

      }
      cnt++;
   }

}


void selection_sort(int arr[],int n)
{
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(arr[i] > arr[j])
			{
				swap(arr[i],arr[j]);
			}
		}
	}
}

void insertion_sort(int arr[],int n)
{

   int i,key,j;

   for(int i=1;i<n;i++)
   {
   	  key=arr[i];
   	  j=i-1;



      while(j >= 0 && arr[j] > key)
      {
      	arr[j+1]=arr[j];
      	j--;
      }
    
    arr[j+1]=key;

   }
}

int  partition(int arr[],int low,int high)
{

      int pivot=arr[high];

     int i=low-1;

     for(int j=low;j<high;j++)
     {
        if(arr[j] < pivot)
        {
        	i++;
        	swap(arr[i],arr[j]);
        }
        

     }
     swap(arr[i+1],arr[high]);
     return (i+1);



}


void quicksort(int arr[],int low,int high)
{

	if(low >= high)
	{
       return;
	}
   
   int p=partition(arr,low,high);
   quicksort(arr,low,p-1);
   quicksort(arr,p+1,high);

}

void merge(int arr[],int low,int high)
{
	int i=low;
   int mid=(low+high)/2;
   int j=mid+1;

    
  vector<int> v;

   while(i <= mid && j <= high)
   {
       if(arr[i] <= arr[j])
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

   while(j <=high)
   {
      v.push_back(arr[j++]);
   }


   int k=0;

   for(int i=low;i<=high;i++)
   {
      arr[i]=v[k++];
   }

return ;
}


void merge_sort(int arr[],int low,int high)
{


    if(low >= high)
    {
    	return;
    }

    int mid=(low+high)/2;

    merge_sort(arr,low,mid);
    merge_sort(arr,mid+1,high);

    merge(arr,low,high);



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

    for(int i=0;i<n;i++)
   {
   	  cout<<arr[i]<<" ";
   }cout<<endl;

   // bubble_sort(arr,n);
   // selection_sort(arr,n);
   // insertion_sort(arr,n);
   // quicksort(arr,0,n-1);
   merge_sort(arr,0,n-1);





  for(int i=0;i<n;i++)
   {
   	  cout<<arr[i]<<" ";
   }cout<<endl;


    return 0;
}