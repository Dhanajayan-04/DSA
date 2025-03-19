#include <bits/stdc++.h>
using namespace std;

// Function to find first occurrence of x
int findFirst(vector<int>& arr, int x) {
    int low = 0, high = arr.size() - 1, first = -1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == x) {
            first = mid;
            high = mid - 1;  // Search in the left half
        } else if (arr[mid] < x) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return first;
}

// Function to find last occurrence of x
int findLast(vector<int>& arr, int x) {
    int low = 0, high = arr.size() - 1, last = -1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == x) {
            last = mid;
            low = mid + 1;  // Search in the right half
        } else if (arr[mid] < x) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return last;
}

int main() {
    int n, x;
    cout << "Enter size of array: ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter elements of array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter target element: ";
    cin >> x;

    int first = findFirst(arr, x);
    int last = findLast(arr, x);

    cout << "First occurrence: " << first << ", Last occurrence: " << last << endl;
    return 0;
}
