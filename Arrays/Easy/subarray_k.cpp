#include <bits/stdc++.h>
using namespace std;

int longestSubarrayWithSumK(vector<int>& arr, int k) {
    unordered_map<int, int> prefixSumIndex;
    int sum = 0, maxLength = 0;

    for (int i = 0; i < arr.size(); i++) {
        sum += arr[i];

        // If subarray from index 0 to i has sum K
        if (sum == k) {
            maxLength = i + 1;
        }

        // If sum - K exists in map, update maxLength
        if (prefixSumIndex.find(sum - k) != prefixSumIndex.end()) {
            maxLength = max(maxLength, i - prefixSumIndex[sum - k]);
        }

        // Store first occurrence of sum
        if (prefixSumIndex.find(sum) == prefixSumIndex.end()) {
            prefixSumIndex[sum] = i;
        }
    }

    return maxLength;
}

int main() {
    int n, k;
    cout << "Enter size of array: ";
    cin >> n;
    vector<int> arr(n);

    cout << "Enter elements of array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter target sum K: ";
    cin >> k;

    int result = longestSubarrayWithSumK(arr, k);
    cout << "Longest subarray length: " << result << endl;

    return 0;
}
