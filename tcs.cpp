#include<bits/stdc++.h>

using namespace std;

int main()
{

  #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    string key;
    cin>>key;
    string k;
    cin>>k;
    

    int size=key.size();
    int n=k.size();
    int l=0;
    while(size < 32 and size > 16)
    {
    	key[l]+= ' ';
    	size++;
    }
    int p=0;
  if(size < 16)
  {
  	while(size != 16)
  	{
  		key[l]+= ' ';
  		size++;
  	}
  }

  // vector<vector<int>> v(4,std::vector<int>);
string newS;
string newStr;
 if(size == 32)
 {
 	int i=0;
    while(newS.size()!=16 and i<16)
    {
       newS.push_back(key[i]);
       i++;
    }
    
    int j=15;
    while(newStr.size()!=32 and j<32)
    {
       newStr.push_back(key[j]);
       j++;
    }

 }
int arr[4][4];
memset(arr,0,sizeof(arr));
int k_=0;
for(int i=0;i<4;i++)
{
	for(int j=0;j<4;j++)
	{
		arr[i][j]=newS[k_]-'0';
		k_++;
	}
}


if(n!=16)
{
	while(n!=16)
	{
      k+=" ";
      n++;
	}
}
int arr1[4][4];
memset(arr1,0,sizeof(arr1));
int o_=0;
for(int i=0;i<4;i++)
{
	for(int j=0;j<4;j++)
	{
		arr1[i][j]=newS[o_]-'0';
		o_++;
	}
}

int arr2[4][4];
memset(arr2,0,sizeof(arr2));
int s_=0;
for(int i=0;i<4;i++)
{
	for(int j=0;j<4;j++)
	{
		arr2[i][j]=newStr[s_]-'0';
		s_++;
	}
}


int arr3[4][4];
for(int i=0;i<4;i++)
{
	for(int j=0;j<4;j++)
	{
		arr3[i][j]=arr1[i][j]^arr2[i][j];
	}
}

string ans;
for(int i=0;i<4;i++)
{
	for(int j=0;j<4;j++)
	{
		ans.push_back(arr3[i][j]+'0');
	}
}

cout<<ans<<endl;



	




    return 0;
}