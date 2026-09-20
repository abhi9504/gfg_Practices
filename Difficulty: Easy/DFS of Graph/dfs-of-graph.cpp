class Solution {
  public:
    void solve(int src, unordered_map<int, bool>& vis, vector<vector<int>>& adj, vector<int>& ans) {
        vis[src] = true;
        ans.push_back(src);
        
        for(auto nbr : adj[src]) {
            if(!vis[nbr]) {
                solve(nbr,vis,adj,ans);
            }
        }
    }
    vector<int> dfs(vector<vector<int>>& adj) {
        // Abhi code Karo
        vector<int> ans;
        unordered_map<int, bool> vis;
        solve(0,vis,adj,ans);
        
        return ans;
    }
};