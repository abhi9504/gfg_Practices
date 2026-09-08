class Solution {
  public:
    int sequence(int n) {
    // Abhi Code Karo
    long int mod = 1e9+7;
    long int prod = 1;
    long int ans = 0;
    long int cnt = 1;
    
    for(int i=1; i<=n; i++) {
        prod = 1;
        for(int j=1; j<=i; j++) {
            prod = (prod * cnt)%mod;
            cnt++;
        }
        ans = (ans + prod)%mod;
    }
      return ans;  
    }
};