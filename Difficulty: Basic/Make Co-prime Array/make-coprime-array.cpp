class Solution {
  public:
    int countCoPrime(const vector<int>& arr) {
        int n = arr.size();
        int count = 0;

        for (int i = 0; i < n - 1; i++) {
            if (__gcd(arr[i], arr[i + 1]) != 1) {
                count++;
            }
        }
        return count;
    }
};