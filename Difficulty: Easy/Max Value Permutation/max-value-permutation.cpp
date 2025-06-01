class Solution {
public:
    int maxValue(vector<int> &arr) {
        const int MOD = 1e9 + 7;
        sort(arr.begin(), arr.end());
        long long sum = 0;
        for (int i = 0; i < arr.size(); i++) {
            sum = (sum + (static_cast<long long>(arr[i]) * i) % MOD) % MOD;
        }
        return (int)sum;
    }
};
