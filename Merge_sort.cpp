// #include <iostream>
// #include<vector>
// using namespace std;

// void merge(int low,int high,int arr[])
// {
    

//    int i=low;
//    int mid=(low+high)/2;
//    int j=mid+1;
//    vector<int> v;

//    while(i<=mid and j<=high)
//    {
//    	if(arr[i]<=arr[j])
//    	{
//       v.push_back(arr[i++]);
//    	}
//    	else
//    	{
//    		v.push_back(arr[j++]);
//    	}
//    }

//    while(i<=mid)
//    {
//    	 v.push_back(arr[i++]);
//    }
//    while(j<=high)
//    {
//    	v.push_back(arr[j++]);
//    }
//    int k=0;
//    for(int i=low;i<=high;i++)
//    {
//    	arr[i]=v[k++];
//    }
//    return;

// }

// void merge_sort(int low,int high,int arr[])
// {
// 	if(low >= high)
// 	{
// 		return;
// 	}
// 	int mid=(low+high)/2;
// 	merge_sort(low,mid,arr);
// 	merge_sort(mid+1,high,arr);

// 	merge(low,high,arr);
// }




// int main()
// {

//   #ifndef ONLINE_JUDGE
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
// #endif

// int n;
// cin>>n;

// int arr[n];

// for(int i=0;i<n;i++)
// {
// 	cin>>arr[i];
// }

// merge_sort(0,n-1,arr);

// cout<<"After sorting:- "<<endl;
// for(int i=0;i<n;i++)
// {
// 	cout<<arr[i]<<" ";
// }cout<<endl;



//     return 0;
// }

#include <iostream>
#include <vector>

using namespace std;

void merge(vector<int> &arr, int low, int mid, int high)
{
   vector<int> temp;
   int left = low;
   int right = mid + 1;
   while (left <= mid && right <= high)
   {
      if (arr[left] <= arr[right])
      {
         temp.push_back(arr[left]);
         left++;
      }
      else
      {
         temp.push_back(arr[right]);
         right++;
      }
   }

   while (left <= mid)
   {
      temp.push_back(arr[left]);
      left++;
   }

   while (right <= high)
   {
      temp.push_back(arr[right]);
      right++;
   }
   int k = 0;
   for (int i = low; i <= high; i++)
   {
      arr[i] = temp[k++];
   }
   return;
}

void divide(vector<int> &arr, int low, int high)
{
   if (low >= high)
   {
      return;
   }
   int mid = (low + high) / 2;
   divide(arr, low, mid);
   divide(arr, mid + 1, high);
   merge(arr, low, mid, high);
}

int main()
{

   vector<int> arr = {3, 4, 2, 6, 1, 67, 43, 23, 89, 456};
   divide(arr, 0, arr.size() - 1);

   for (auto it : arr)
   {
      cout << it << " ";
   }

   return 0;
}
