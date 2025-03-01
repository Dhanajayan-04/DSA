#include <bits/stdc++.h>
using namespace std;

void getSingle_element(int arr[],int n){
    int xorr=0;
    for(int i=0;i<n;i++){
        xorr=xorr^arr[i];
    }
    cout << xorr;
}
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    getSingle_element(arr,n);
    return 0;
}