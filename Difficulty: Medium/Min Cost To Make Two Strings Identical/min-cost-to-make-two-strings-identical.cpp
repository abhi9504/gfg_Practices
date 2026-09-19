class Solution {
  public:
    int solve(int i, int j, string &s1, string &s2, int costA, int costB) {
        int n = s1.size();
        int m = s2.size();
        // Base Case
        if((i == n) || (j == m)) {
            return (n-i) * costA + (m-j) * costB;
        }
        
        // Check already exist condition
        if(dp[i][j] != -1) {
            return dp[i][j];
        }
        
        // ek case hm solve karnege baaki recursion shmbhal lega
        if(s1[i] == s2[j]) {
            return dp[i][j] = solve(i+1,j+1,s1,s2,costA,costB);
        }
        
        // logic
        return dp[i][j] = min(
            costA + solve(i+1,j,s1,s2,costA,costB),
            costB + solve(i,j+1,s1,s2,costA,costB)
            );
    }
    int dp[1001][1001];
    int findMinCost(string &s1, string &s2, int costS1, int costS2) {
        // Abhi Code Karo
        memset(dp, -1, sizeof dp);
        
        return solve(0,0,s1,s2,costS1,costS2);
        
    }
};