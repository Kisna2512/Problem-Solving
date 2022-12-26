class Solution {
public:
    vector<int> lexicalOrder(int n) {
        
        
     vector<string> s;
 
    for (int i = 1; i <= n; i++) {
        s.push_back(to_string(i));
    }
 
    sort(s.begin(), s.end());
    vector<int> ans;
    for (int i = 0; i < n; i++)
        ans.push_back(stoi(s[i]));
 
   return ans;


    }
};
