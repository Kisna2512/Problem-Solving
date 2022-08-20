#include<bits/stdc++.h>

using namespace std;

int main()
{

  #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

 int arr[5][5];
 int steps,x,y;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cin >> arr[i][j];
        }
    }

for(int i=0;i<5;i++)
{
	for(int j=0;j<5;j++)
	{
		if(arr[i][j]==1)
		{
			x=i+1;
			y=j+1;
		}
	}
}

steps=abs(x-3) + abs(y-3);
cout<<steps<<endl;



    return 0;
}