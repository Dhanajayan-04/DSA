#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    if (n == 0) {
        cout << 0 << endl;
    } else if (n == 1) {
        cout << 1 << endl;
    } else {
        int a = 0, b = 1, fib;
        for (int i = 2; i <= n; i++) {
            fib = a + b;
            a = b;
            b = fib;
        }
        cout << b << endl;
    }

    return 0;
}