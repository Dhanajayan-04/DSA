#include <bits/stdc++.h>
using namespace std;

void linear_search(int arr[],int n,int num) {
    bool found = false;
    for (int i=0;i<n;i++) {
        if(arr[i]==num) {
            cout << i << " "; // Print index of found element
            found = true;
        }
    }
    if(!found){
        cout << -1; // Print -1 if the number is not found
    }
    cout << endl;
}

int main() {
    int n, num;
    cin >> n >> num;
    int arr[n];

    for (int i=0;i<n;i++) {
        cin >> arr[i];
    }

    linear_search(arr, n, num);
    return 0;
}
