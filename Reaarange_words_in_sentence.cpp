class Solution {
  public:

    bool static comp(pair < string, int > a, pair < string, int > b) {
      if (a.first.size() == b.first.size()) {
        return a.second < b.second;
      }
      return a.first.size() < b.first.size();
    }

  string arrangeWords(string text) {
    vector < pair < string, int >> str;
    string temp = "";
    for (int i = 0; i < text.size(); i++) {

      if (text[i] == ' ') {
        continue;
      }
      int j = i;
      while (i < text.size() && text[i] != ' ') {
        temp += text[i];
        i++;
      }
      transform(temp.begin(), temp.end(), temp.begin(), ::tolower);
      str.push_back({
        temp,
        j
      });
      temp = "";

    }

    sort(str.begin(), str.end(), comp);
    string ans = "";

    for (int i = 0; i < str.size(); i++) {
      ans += str[i].first;
      ans += " ";
    }
    ans.pop_back();
    ans[0] = toupper(ans[0]);
    return ans;
  }
};
