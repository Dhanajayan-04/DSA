#include <bits/stdc++.h>
using namespace std;

void findConsecutive_ones(int arr[],int n){
    int cnt=0;
    int maxi=0;
    for(int i=0;i<n;i++){
        if(arr[i]==1){
            cnt++;
            maxi = max(maxi,cnt);
        }
        else{
            cnt=0;
        }
    }
    cout << maxi;
}
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    findConsecutive_ones(arr,n);
    return 0;
}