#include <iostream>
using namespace std;

int main() {
    // code here
    int a;
    cin >> a;
    // using switch statement
    string result;
    switch(a){
        case 1: 
        result = "One";
        break;
        case 2:
        result = "Two";
        break;
        case 3:
        result = "Three";
        break;
        case 4:
        result = "Four";
        break;
        case 5:
        result = "Five";
        break;
        case 6:
        result = "Six";
        break;
        case 7:
        result = "Seven";
        break;
        case 8:
        result= "Eight";
        break;
        case 9:
        result = "Nine";
        break;
        default : 
        result = "Unknown";
        break;
    }
    cout << result;
    return 0;
}