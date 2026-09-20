class Solution {
  public:
    vector<int> bfs(vector<vector<int>> &adj) {
        // Abhi Code karo
        vector<int> ans;
        unordered_map<int, bool> vis;
        queue<int> q;
        
        q.push(0);
        vis[0] = true;
        
        while(!q.empty()) {
            int fNode = q.front();
            q.pop();
            ans.push_back(fNode);
            
            // go to nbr
            for(auto nbr : adj[fNode]) {
                if(!vis[nbr]) {
                    q.push(nbr);
                    vis[nbr] = true;
                }
            }
        }
       return ans; 
    }
};