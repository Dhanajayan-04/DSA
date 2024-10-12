#include<bits/stdc++.h>
using namespace std;

// Brute Force Approach TC --> o(log10(n))

int main(){
    int num , n , count = 0;
    cin >> num;
    n = num;
    while(n>0){
        count+=1;
        n/=10;
    }
    cout << "Number of Digits: ";
    cout << count << endl;

// Optimal Approach TC -->o(1)

    cout << "Number of Digits: ";
    cout << (int)(log10(num)+1);

    return 0;
}