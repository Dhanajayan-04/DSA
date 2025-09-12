
import java.util.*;

class Solution {
    public static int specialIntegers(int n, int[] arr) {
        // Use a HashSet to store unique numbers
        HashSet<Integer> set = new HashSet<>();
        for (int x : arr) {
            set.add(x);
        }
        
        int count = 0;
        // Check each unique element
        for (int x : set) {
            if (set.contains(x - 1) && set.contains(x + 1)) {
                count++;
            }
        }
        
        return count;
    }
}
 
