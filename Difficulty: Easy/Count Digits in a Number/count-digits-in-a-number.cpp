class Solution {
  public:
    int countDigits(int n) {
        // Code here
        int cnt = 0;
        while(n > 0) {
            int num = n % 10;
            cnt++;
            n = n / 10;
        }
        return cnt;
    }
};