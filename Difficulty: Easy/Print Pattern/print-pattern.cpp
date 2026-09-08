class Solution {
  public:
    void solve(int n, vector<int>& ans){
        //base case
        if(n <= 0) {
            ans.push_back(n);
            return;
        }
        ans.push_back(n);
        
        solve(n-5, ans);
        ans.push_back(n);
        return;
    }
    vector<int> pattern(int n) {
        // base case
      vector<int> ans;
      
      solve(n, ans);
      
      return ans;
    }
};