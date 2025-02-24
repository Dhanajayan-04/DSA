#include <bits/stdc++.h>
using namespace std;

void two_Sum(int n, vector<int> &arr, int target) {
    unordered_map<int, int> mpp;
    for (int i = 0; i < n; i++) {
        int num = arr[i];
        int moreNeeded = target - num;
        if (mpp.find(moreNeeded) != mpp.end()) {
            cout << "YES" << endl;
            return;
        }
        mpp[num] = i;
    }
    cout << "NO" << endl;
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);  
    for (int i = 0; i < n; i++) {
        cin >> arr[i]; 
    }
    
    int target;
    cin >> target; 

    two_Sum(n, arr, target);  

    cout << "This is the answer for variant 1: " << endl;
    return 0;
}
