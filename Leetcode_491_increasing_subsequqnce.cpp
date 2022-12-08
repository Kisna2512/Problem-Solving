class Solution {
  public:

    void solve(int idx, vector < int > & nums, vector < int > & temp, set < vector < int >> & ans) {

      if (idx == nums.size()) {
        if (temp.size() > 1) {
          for (int i = 0; i < temp.size() - 1; i++) {
            if (temp[i] > temp[i + 1]) {
              return;
            }
          }
        } else {
          return;
        }

        ans.insert(temp);
        return;
      }

      temp.push_back(nums[idx]);
      solve(idx + 1, nums, temp, ans);
      temp.pop_back();

      solve(idx + 1, nums, temp, ans);

    }

  vector < vector < int >> findSubsequences(vector < int > & nums) {
    vector < int > temp;
    set < vector < int >> ans;

    solve(0, nums, temp, ans);
    vector < vector < int > > ans2;
    for (auto it: ans) {
      ans2.push_back(it);
    }
    return ans2;

  }
};
