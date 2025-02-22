#include <bits/stdc++.h>
using namespace std;

void second_largest(int arr[],int n){
    int largest = arr[0];
    int seclargest = -1;
    for(int i=1;i<n;i++){
        if(arr[i]>largest){
            seclargest = largest;
            largest = arr[i];
        }
        else if(arr[i]<largest && arr[i]>seclargest){
            seclargest = arr[i];
        }
    }
    cout << seclargest;
}
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    second_largest(arr,n);
    return 0;
}