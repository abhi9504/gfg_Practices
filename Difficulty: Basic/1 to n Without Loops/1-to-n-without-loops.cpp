class Solution {
  public:
    void printTillN(int n) {
        // Abhi Code Karo
        // Base Case
        if(n == 0) return;
        
        printTillN(n-1);
        cout<<n<<" ";
        
    }
}; 