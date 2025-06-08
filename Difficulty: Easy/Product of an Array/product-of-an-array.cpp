class Solution {
  public:
    // arr[] is the array
    long long int product(vector<int> &arr) {
        // code here
        long long int result=1;
        int mod=1000000007;
        int n=arr.size();
        
        for(int i=0;i<n;i++){
            result=(result*arr[i])%mod;
        }
        return result;
    }
};