class Solution {
  public:
    int dominantPairs(vector<int> &arr) {
        // Abhi Code Karo
        int n = arr.size();
        int m = n/2;
        vector<int> first(arr.begin(), arr.begin()+m);
        vector<int> second(arr.begin()+m, arr.end());
        
        sort(first.begin(), first.end());
        sort(second.begin(), second.end());
        
        long long ans = 0;
        int j = 0;
        
        for(int x : first) {
            while(j < m && x >= 5LL * second[j]) {
                j++;
            }
            ans += j;
        }
       return ans; 
    }
};