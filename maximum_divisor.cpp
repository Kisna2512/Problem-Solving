#include<bits/stdc++.h>

using namespace std;


int max_divisor(int n)
{
	int height=0;

	while(n > 1)
	{
		bool flag=false;
		for(int i=2;i*i<= n;i++)
		{
			if(n%i==0)
			{
				n=n/i;
			    flag=true;
			    break;
			}
			
		}

      height++;
     if(!flag)
     {
     	break;
     }

	}
	return height;

}







int main()
{

  #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

  int n;
  cin>>n;

  cout<<max_divisor(n)<<endl;









    return 0;
}