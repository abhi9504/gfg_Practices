class Solution {
  public:
    int solve(int i, vector<int>& arr, int x) {
        // Base Case
        if(i >= arr.size()) return -1;
        
        if(arr[i] == x) return i;
        
        return solve(i+1, arr, x);
        
    }
    int search(vector<int>& arr, int x) {
        // Abhi Code Karo
       return solve(0, arr, x);
        
    }
};