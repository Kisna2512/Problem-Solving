#include<bits/stdc++.h>

using namespace std;

int main()
{

  #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif


 int n,m;
 cin>>n>>m;
int oddness=0;
for(int i=0;i<n;i++)
{
  if(i%2==0)
  {
    for(int j=0;j<m;j++)
    {
      cout<<"#";
    }

  }
  else
  {
    oddness++;
    for(int j=0;j<m;j++)
    {
      if(oddness%2==1 and j==m-1)
      {
        cout<<"#";
      }
      else if(oddness%2==0 and j==0)
      {
        cout<<"#";
      }
      else
      {
        cout<<".";
      }
    }
  }
  cout<<"\n";
}









    return 0;
}