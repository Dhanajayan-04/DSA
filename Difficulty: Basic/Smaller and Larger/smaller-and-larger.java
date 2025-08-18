// User function Template for Java

class Solution {
    int[] getMoreAndLess(int[] arr, int target) {
        int n = arr.length;

        // lower_bound: first index with value >= target
        int lb = lowerBound(arr, target);

        // upper_bound: first index with value > target
        int ub = upperBound(arr, target);

        int lessEqual = ub;       // count of <= target
        int greaterEqual = n - lb; // count of >= target

        return new int[]{lessEqual, greaterEqual};
    }

    // First index where arr[i] >= x
    private int lowerBound(int[] arr, int x) {
        int l = 0, r = arr.length;
        while (l < r) {
            int m = l + (r - l) / 2;
            if (arr[m] < x) l = m + 1;
            else r = m;
        }
        return l;
    }

    // First index where arr[i] > x
    private int upperBound(int[] arr, int x) {
        int l = 0, r = arr.length;
        while (l < r) {
            int m = l + (r - l) / 2;
            if (arr[m] <= x) l = m + 1;
            else r = m;
        }
        return l;
    }
}
