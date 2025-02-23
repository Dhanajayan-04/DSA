#include <bits/stdc++.h>
using namespace std;

void left_rotate(vector<int>& arr,int n,int d) {
    d=d%n;
    vector<int>temp(arr.begin(),arr.begin()+d);
    for (int i=d;i<n;i++) {
        arr[i-d] = arr[i];
    }

    for (int i=0;i<d;i++) {
        arr[n-d+i]=temp[i];
    }
}

int main() {
    int n;
    cin >> n;
    vector<int>arr(n);
    for (int i=0;i<n;i++) {
        cin >> arr[i];
    }
    int d;
    cin >> d;
    left_rotate(arr, n, d);
    for (int i=0;i<n;i++) {
        cout << arr[i] << " ";
    }
    return 0;
}