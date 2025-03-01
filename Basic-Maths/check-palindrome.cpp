#include<bits/stdc++.h>
using namespace std;

// TC --> o(log10(n))

bool checkPalindrome(int n){
    int givenNum = n;
    int lastdigit , revNum = 0;

    while(n > 0){
        lastdigit = n % 10;
        revNum = (revNum * 10) + lastdigit;
        n/=10;
    }
    if(revNum == givenNum) return true;
    else return false;
}
int main(){

    int n;
    cin >> n;
    if(checkPalindrome(n)){
        cout << "The given number is a Numeric Palindrome";
    }
    else{
        cout << "The given number is not a Numeric Palindrome";
    }
}