#include <bits/stdc++.h>
using namespace std;

long long maxSubarraySum(int arr[], int n) {
    long long maxi = LONG_LONG_MIN; // Fix: Use LONG_LONG_MIN for long long
    long long sum = 0;

    for (int i = 0; i < n; i++) {
        sum += arr[i];
        if (sum > maxi) {
            maxi = sum;
        }
        if (sum < 0) {
            sum = 0;
        }
    }
    return maxi;
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    long long maxSum = maxSubarraySum(arr.data(), n); 
    cout << "The maximum subarray sum is: " << maxSum << endl;
    return 0;
}
