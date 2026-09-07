class Solution {
  public:
    int recursivePower(int n, int p) {
        // code here
        if(p == 0)  return 1;
        if(n == 0) return 0;
        if(n == 1)  return 1;
        
        return pow(n, p);
    }
};
