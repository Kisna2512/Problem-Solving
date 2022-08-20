#include<bits/stdc++.h>

using namespace std;

class info
{
	public:
		int open,close,full;
	info(int open_,int close_,int full_)
	{
		open=open_;
		close=close_;
		full=full_;
	}
	info()
	{
		open=0;close=0;
		full=0;
	}
};

info merge(info left,info right)
{
	info ans=info(0,0,0);
	ans.full=left.full +right.full+min(left.open,right.close);
	ans.open=left.open+right.open-min(left.open,right.close);
	ans.close=left.close+right.close-min(left.open,right.close);
}


void build(int ind,int low,int high,string s,info seg)
{
	if(low==high)
	{
		seg[ind].open=s[low]=='(';
		seg[ind].close=s[low]==')';
		seg[ind].full=0;
		return;
	}
	int mid=(low+high)/2;
	build(2*ind+1,low,mid,s,seg);
	build(2*ind+2,mid+1,high,s,seg);
	seg[ind]=merge(seg[2*ind+1],seg[2*ind+2]); 
}


void solve()
{
	string s;
	cin>>s;
	int n=s.size();
	int q;
	cin>>q;
	info seg[4*n];
	build(0,0,n-1,s,seg);

	while(q--)
	{
		int l,r;
		cin>>l>>r;
		l--,r--;

	}
}


int main()
{

  #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

solve();


    return 0;
}