
#include<bits/stdc++.h>

using namespace std;
// TC:-O(logn)
// tc:-O(1)
int binarysearch(int arr[],int n,int target)
{
    int low=0;
    int high=n-1;

    while(low <= high)
    {
        int mid=(low+high)/2;
        
        if(arr[mid]==target)
        {
            return mid;
        }
        else if(arr[mid] > target)
        {
            high=mid-1;
        }
        else
        {
            low=mid+1;
        }
        
    }
    return -1;
}




















int main()
{

  #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

int arr[10];

for (int i = 0; i < 5; i++)
{
    cin>>arr[i];
}


if(binarysearch(arr,5,40) < 0)
{
    cout<<"Element is not found:- "<<endl;
}
else
{
    cout<<"Element is present at index:- "<<binarysearch(arr,5,40)<<endl;
}

// cout<<"odd indexing  array elements:- "<<endl;
// for (int i = 0; i < 5; ++i)
// {
//     if(i%2!=0)
//     {
//         cout<<arr[i]<<" ";
//     }
// }
// cout<<"After doubling each element:- "<<endl;
// for (int i = 0; i < 5; ++i)
// {
//     arr[i]=arr[i]*2;
//    cout<<"The element at index:- "<<i<<" is "<<arr[i]<<endl;
// }

// string s;
// cin>>s;
// cout<<s;

    return 0;
}