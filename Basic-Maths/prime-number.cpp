#include<bits/stdc++.h>
using namespace std;

// 

bool isPrime1(int n){

    for(int i=2 ; i <= n/2 ; i++){
        if(n%i == 0) return false;
    }

    return true;
}

// 

bool isPrime2(int n){
    int cnt = 0;
    for(int i=1 ; i*i <= n ; i++){
        if(n%i == 0){
            cnt++;

            if(n%i != i) cnt++;
        }
    }
    return cnt == 2 ? true : false;
}
int main(){
    int n;
    cin >> n;
    if(isPrime1(n)){
        cout << "The given number is a Prime Number";
    }
    else{
        cout << "The given number is not a Prime Number";
    }
    cout << endl;

    if(isPrime2(n)){
        cout << "The given number is a Prime Number";
    }
    else{
        cout << "The given number is not a Prime Number";
    }
}