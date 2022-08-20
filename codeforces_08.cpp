#include<bits/stdc++.h>

using namespace std;

int main()
{

  #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
 
 int n;
 cin>>n;
 int i=0;
 while(n--)
 {
 	string s;
 	cin>>s;

   
   if(s=="Tetrahedron")
   {
   	i+=4;
   }
   else if(s=="Cube"){
   	i+=6;
   }
   else if(s=="Octahedron")
   {
   	i+=8;
   }
   else if(s=="Dodecahedron")
   {
   	i+=12;
   }
   else if(s=="Icosahedron")
   {
   	i+=20;
   }


 }
 cout<<i<<endl;

    return 0;
}