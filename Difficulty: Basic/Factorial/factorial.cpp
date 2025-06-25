// User function Template for C++

int nFactorial(int n) {
    int ans = 1;

    // Write your code here
    for(int i=1;i<=n;i++){
        ans*=i;
    }

    return ans;
}