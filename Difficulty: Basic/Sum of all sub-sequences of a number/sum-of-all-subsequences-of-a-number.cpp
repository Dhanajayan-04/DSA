// User function template for C++
class Solution {
public:
    int subsequenceSum(string s) {
        int n = s.size();
        long long sumDigits = 0;

        for (char c : s) {
            sumDigits += (c - '0');
        }

        // Each digit appears in 2^(n-1) subsequences
        long long factor = 1LL << (n - 1);  // 2^(n-1)
        return sumDigits * factor;
    }
};
