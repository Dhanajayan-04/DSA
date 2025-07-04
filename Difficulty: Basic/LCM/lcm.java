// User function Template for Java
class Solution {
    public static int LCM(int a, int b) {
        int gcd = GCD(a, b);            // compute gcd
        return (a / gcd) * b;           // compute lcm using (a*b)/gcd, written like this to avoid overflow
    }

    // Helper method to compute GCD using Euclidean algorithm
    private static int GCD(int a, int b) {
        if (b == 0)
            return a;
        return GCD(b, a % b);
    }
}
