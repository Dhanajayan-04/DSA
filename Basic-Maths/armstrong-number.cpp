#include<bits/stdc++.h>
using namespace std;

// TC --> o(log10(n))

bool isArmstrong(int n){

    int num = n;
    int len = to_string(n).length();
    int lastdigit;
    int sum = 0;
    while(n>0){
        lastdigit = n % 10;
        sum = sum + pow(lastdigit , len);
        n/=10;
    }
    return sum == num ? true : false;
}
int main(){
    int n;
    cin >> n;

    if(isArmstrong(n)){
        cout << "The given number is a Armstrong Number";
    }

    else{
        cout << "The given number is not a Armstrong Number";
    }

    return 0;
}