class Solution {
  public:
    int nthFibonacci(int n) {
        // Abhi Code Karo
        // Base Case
        if(n == 0 || n == 1)  return n;
        
        return nthFibonacci(n-1) + nthFibonacci(n-2);
    }
};