// User function Template for C++

int LCM(int a, int b) {
   
    auto gcd = [](int x, int y) {
        while (y != 0) {
            int temp = y;
            y = x % y;
            x = temp;
        }
        return x;
    };
    
   
    return (a * b) / gcd(a, b);
}
