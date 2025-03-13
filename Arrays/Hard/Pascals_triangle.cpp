#include <bits/stdc++.h>
using namespace std;

long long nCr(int n, int r) {
    long long res = 1;

    // calculating nCr:
    for (int i = 0; i < r; i++) {
        res = res * (n - i);
        res = res / (i + 1);
    }
    return res;
}

int pascalTriangle(int r, int c) {
    int element = nCr(r - 1, c - 1);
    return element;
}

int main()
{
    int r,c;
    cin >> r >> c;
    int element = pascalTriangle(r, c);
    cout << "The element at position (r,c) is: " << element << "\n";
    return 0;
}