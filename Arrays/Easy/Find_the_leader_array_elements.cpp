#include <bits/stdc++.h>
using namespace std;

vector<int> findLeaders(vector<int>& arr) {
    int n = arr.size();
    vector<int> leaders;
    int maxRight = arr[n - 1]; // The rightmost element is always a leader
    leaders.push_back(maxRight);

    // Traverse from right to left
    for (int i = n - 2; i >= 0; i--) {
        if (arr[i] > maxRight) {
            maxRight = arr[i];
            leaders.push_back(maxRight);
        }
    }

    // Since we added leaders from right to left, reverse them before returning
    reverse(leaders.begin(), leaders.end());
    return leaders;
}

int main() {
    int n;
    cin >> n; 
    vector<int> arr(n);
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    vector<int> leaders = findLeaders(arr);
    cout << "Leader elements: ";
    for (int num : leaders) {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}
