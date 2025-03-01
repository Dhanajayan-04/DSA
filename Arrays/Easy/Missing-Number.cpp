#include <bits/stdc++.h>
using namespace std;

void Missing_number(int arr[],int n){
    int sum1=0;
    int sum2=n*(n+1)/2;
    for(int i=0;i<n-1;i++){
        sum1+=arr[i];
    }
    cout << (sum2 - sum1);
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    Missing_number(arr,n);
    return 0;
}