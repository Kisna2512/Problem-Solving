// Xenia and Bit operations
//codeforces 339D
#include<bits/stdc++.h>

using namespace std;


void buildee(int ind,int low,int high,int arr[],int seg[],int orr)
{
	if(low==high)
	{
		seg[ind]=arr[low];
		return;
	}
	int mid=(low+high)/2;
	buildee(2*ind+1,low,mid,arr,seg,!orr);
	buildee(2*ind+2,mid+1,high,arr,seg,!orr);
	if(orr)
	{
	    seg[ind]=seg[2*ind+1] | seg[2*ind+2];
	}
	else
	{
	    seg[ind]=seg[2*ind+1] ^ seg[2*ind+2];
	}
}

void updatee(int ind,int low,int high,int seg[],int orr,int i,int val)
{
	if(low==high)
	{
      seg[ind]=val;
      return;
	}
	int mid=(low+high)/2;
	if(i<=mid) updatee(2*ind+1,low,mid,seg,!orr,i,val);
	else updatee(2*ind+2,mid+1,high,seg,!orr,i,val);
	if(orr) seg[ind]=seg[2*ind+1] | seg[2*ind+2];
	else seg[ind]=seg[2*ind+1] ^ seg[2*ind+2];
}

void solve3(){
	int n,q;
	cin>>n>>q;
	
	int ele=pow(2,n);
	int arr[ele];
	for(int i=0;i<ele;i++)
	{
		cin>>arr[i];
	}
	int seg[4*ele];
	if(n%2==0) buildee(0,0,ele-1,arr,seg,0);
	else buildee(0,0,ele-1,arr,seg,1);

	while(q--)
	{
		int i,val;
		cin>>i>>val;
		i--;
		if(n % 2 == 0)
		{
		    updatee(0,0,ele-1,seg,0,i,val);
		}
		else
		{
		    updatee(0,0,ele-1,seg,1,i,val);
		}
		cout<<seg[0]<<endl;
	}

}

int main(){

  #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

solve3();
return 0;

}



