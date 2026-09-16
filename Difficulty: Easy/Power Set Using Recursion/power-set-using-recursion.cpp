class Solution {
  public:
    void solve(int i, vector<string>& ans, string s, string output) {
        // base case
     
        if(i >= s.size()) {
            ans.push_back(output);
            return;
        }
        // Include
        output.push_back(s[i]);
        solve(i+1, ans, s, output);
        
        // backtrack and exclude
        output.pop_back();
        solve(i+1, ans, s, output);
        
    }
    vector<string> powerSet(string s) {
        // Abhi Code Karo
        vector<string> ans;
        string output ="";
        
        solve(0, ans, s, output);
        
        return ans;
        
    }
};
