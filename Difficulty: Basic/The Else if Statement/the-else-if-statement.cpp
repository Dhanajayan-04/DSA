#include <iostream>
using namespace std;

int main() {
    // code here
    int a;
    cin >> a;
    if(a>100){
        cout << "Big" << endl;
    }else if(a<10){
        cout << "Small" << endl;
    }else{
        cout << "Number" << endl;
    }
    return 0;
}