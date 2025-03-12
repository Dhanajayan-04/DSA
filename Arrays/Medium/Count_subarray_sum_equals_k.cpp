#include <bits/stdc++.h>
using namespace std;

int findAllSubarraysWithGivenSum(vector<int> &arr, int k) {
    int n = arr.size();
    map<int, int> mpp;
    int preSum = 0, cnt = 0;

    mpp[0] = 1; // Initialize with prefix sum 0

    for (int i = 0; i < n; i++) {
        preSum += arr[i]; // Update prefix sum

        // Check if (preSum - k) exists in the map
        int remove = preSum - k;
        cnt += mpp[remove]; 

        // Store the prefix sum in the map
        mpp[preSum]++;
    }
    return cnt;
}

int main() {
    int n, k;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter the target sum k: ";
    cin >> k;

    int cnt = findAllSubarraysWithGivenSum(arr, k);
    cout << "The number of subarrays with sum " << k << " is: " << cnt << "\n";

    return 0;
}


