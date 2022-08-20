#include<bits/stdc++.h>

using namespace std;




class ST
{
   
 vector<int> seg,lazy;

public:
	 ST (int n)
	 {
       seg.resize(4*n);
       lazy.resize(4*n);

	 }

	 void build(int ind,int low,int high,int arr[])
	 {
	 	if(low==high)
	 	{
	 		seg[ind]=arr[low];
	 	}
	 	int mid=(low+high) >> 1;
	 	build(2*ind+1,low,mid,arr);
	 	build(2*ind+2,mid+1,high,arr);
	 	seg[ind]=seg[2*ind+1] + seg[2*ind+2];
	 }
	 void update(int ind,int low,int high,int l,int r,int val)
	 {
	 	if(lazy[ind]!=0)
	 	{
	 		seg[ind]+=(high-low+1)*lazy[ind];

	 		if(low!=high)
	 		{
	 			lazy[2*ind+1]+=lazy[ind];
	 			lazy[2*ind+2]+=lazy[ind];
	 		}
	 		lazy[ind]=0;
	 	}


      if(high < l or r < low)
      {
      	return ;
      }



   if(low >=  l and high <= r)
   {
   	seg[ind]+=(high-low+1)*val;
   	if(low!=high)
   	{ 
   		lazy[2*ind+1]+=val;
   		lazy[2*ind+2]+=val;
   	}
   	return;
   }



  int mid=(low+high) >> 1;
  update(2*ind+1,low,mid,l,r,val);
  update(2*ind+2,mid+1,high,l,r,val);
  seg[ind]=seg[2*ind+1]+seg[2*ind+2];
	 }


	 int query(int ind,int low,int high,int l,int r)
	 {


    // if updates are remaining
    if(lazy[ind]!=0)
	 	{
	 		seg[ind]+=(high-low+1)*lazy[ind];

	 		if(low!=high)
	 		{
	 			lazy[2*ind+1]+=lazy[ind];
	 			lazy[2*ind+2]+=lazy[ind];
	 		}
	 		lazy[ind]=0;
	 	}



   // no overlap
    if(high < l or r < low)
      {
      	return 0;
      }

      //complete overlap
      if(low >= l && high <= r)
      {
      	return seg[ind];
      }

      int mid=(low+high) >> 1;
      int left=query(2*ind+1,low,mid,l,r);
      int right=query(2*ind+2,mid+1,high,l,r);

      return left+right;


	 }





};



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
    ST st(n+1);
    st.build(0,0,n-1,arr);
    int q;
    cin>>q;

    while(q--)
    {
    	int type;
    	cin>>type;
    	if(type==1)
    	{
    		int l,r;
    		cin>>l>>r;
    		cout<<st.query(0,0,n-1,l,r)<<endl;
    	}
    	else
    	{
    		int l,r,value;
    		cin>>l>>r>>value;
    		st.update(0,0,n-1,l,r,value);
    	}
    }



    return 0;
}