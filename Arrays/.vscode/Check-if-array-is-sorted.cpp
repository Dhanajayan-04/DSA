#include <bits/stdc++.h>
using namespace std;

void is_sorted(int arr[],int n){
    for(int i=1;i<n;i++){
        if(arr[i]>=arr[i-1]){

        }
        else{
            cout << "false";
        }
    }
    cout << "true";
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    is_sorted(arr,n);
    return 0;
}