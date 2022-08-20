#include<bits/stdc++.h>

using namespace std;


class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;
        unordered_map<string,vector<int>> m;
        for(int i=0;i<strs.size();i++)
        {
        	auto s=strs[i];
        	sort(s.begin(),s.end());
        	m[s].push_back(i);
        }
        for(auto a:m)
        {
        	vector<string> v;
        	for(auto b:a.second)
        	{
        		v.push_back(strs[b]);

        	}
        		ans.push_back(v);
        }
        
return ans;





    }
};










int main()
{

  #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

Solution obj;
int n;
cin>>n;

vector<string> strs;
for(int i=0;i<n;i++)
{
	string x;
	cin>>x;
	strs.push_back(x);
}

vector<vector<string>> ans=obj.groupAnagrams(strs);
for (int i = 0; i < ans.size(); ++i)
{
	for (int j=0;j<ans[i].size(); j++)
	{
		cout<<ans[i][j]<<",";
	}cout<<endl;
}




    return 0;
}