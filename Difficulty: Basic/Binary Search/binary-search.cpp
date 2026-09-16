class Solution {
  public:
    bool solve(int s, int e, vector<int>& arr, int k) {
        // Base Case
        if(s > e)  return false;
        int mid = s+(e-s)/2;
        if(arr[mid] == k)  return true;
        else if(arr[mid] < k)  return solve(mid+1, e, arr, k);
        else  return solve(s, mid-1, arr, k);
    }
    bool binarySearch(vector<int>& arr, int k) {
        // Abhi Code Karo
        int n = arr.size();
        
       bool ans = solve(0, n-1, arr, k);
       
       if(ans){
           return true;
       }else
        return false;
    }
};