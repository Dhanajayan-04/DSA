class Solution {
    public static boolean isPerfect(int[] arr) {
        int i = 0, j = arr.length - 1;
        
        while (i < j) {
            if (arr[i] != arr[j]) {
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
}
