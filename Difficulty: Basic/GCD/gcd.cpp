// User function Template for C++

int gcd(int a, int b) {
    // code here to calculate and return gcd of a and b
    while(b!=0){
        int temp=b;
        b=a%b;
        a=temp;
    }
    return a;
}