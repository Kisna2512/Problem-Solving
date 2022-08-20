#include<bits/stdc++.h>

using namespace std;
 bool isPowerOfTwo(int n) {
        if(n==0) return false;
        while(n%2==0) n/=2;
        return n==1;
    }
int main()
{

  #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

int t;
cin>>t;
while(t--)
{
	int a,b;
	cin>>a>>b;
	if(a > b)
	{
		swap(a,b);
	}


	if(a == b)
	{
		
		cout<<"YES"<<endl;
	
	}
	else if(b%a!=0)
	{
		
    cout<<"NO"<<endl;

		}
		else
		{
			int div=b/a;
			while(div%2==0)
			{
				div/=2;
			}

      if(div!=1)
      {
      	cout<<"NO"<<endl;
      }
      else
      {
      	cout<<"YES"<<endl;
      }
      

		}

}

    return 0;
}