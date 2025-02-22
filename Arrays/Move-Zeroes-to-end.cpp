#include <bits/stdc++.h>
using namespace std;

void move_Zeroes(int arr[], int n) {
    int j=-1;

    // Find the first zero element
    for (int i=0;i<n;i++) {
        if (arr[i]==0) {
            j=i;
            break;
        }
    }
    // If there are no zeroes, no need to process further
    if (j==-1){
        for (int i=0;i<n;i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
        return;
    }
    // Move non-zero elements to the front
    for (int i=j+1;i<n;i++) {
        if (arr[i]!=0) {
            swap(arr[i], arr[j]);
            j++;
        }
    }
    // Print the modified array
    for (int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i=0;i<n;i++) {
        cin >> arr[i];
    }
    move_Zeroes(arr,n);
    return 0;
}
