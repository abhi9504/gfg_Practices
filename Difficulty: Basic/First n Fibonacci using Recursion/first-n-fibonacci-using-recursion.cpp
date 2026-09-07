class Solution {
  public:
    void solve(int n, vector<int>& ans) {
        // Base Case
      if(n == 0)  return;
      
      solve(n-1, ans);
      
      if(ans.size() == 0) ans.push_back(0);
      else if(ans.size() == 1)  ans.push_back(1);
      else ans.push_back(ans[ans.size()-1] + ans[ans.size()-2]);
    }
    vector<int> fibonacciNumbers(int n) {
        // Abhi Code Karo
        vector<int> ans;
        solve(n, ans);
        return ans;
    }
};