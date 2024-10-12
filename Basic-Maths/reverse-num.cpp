#include<bits/stdc++.h>
using namespace std;

// TC --> o(log10(n))

int main(){

    int num , revNum = 0;
    cin >> num;
    int n = num;

    while(num > 0){
        int lastdigit = num % 10 ;
        if (lastdigit == 0) continue;
        revNum = (revNum * 10) + lastdigit;
        num /= 10;
    }
    cout << " Reverse of " << n << " is " << revNum;

    return 0;
}