// User function template for C++

class Solution {
  public:
    int totalCount(int k, vector<int>& arr) {
        // code here
        int n=arr.size();
        int total =0;
        for(int i=0;i<n;i++){
            total+=(arr[i]+k-1)/k; 
        }
        return total;
    }
};