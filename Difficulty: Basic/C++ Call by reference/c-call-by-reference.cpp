int reverse_number(int n){
    int rev = 0;
    while(n>0){
        rev = rev*10 + n%10;
        n/=10;
    }
    return rev;
}

void reverse_dig(int &a, int &b) {
    // Add your code here.
    a = reverse_number(a);
    b = reverse_number(b);
}

void swap(int &a, int &b) {
    // Add your code here.
    int temp = a;
    a = b;
    b = temp;
}