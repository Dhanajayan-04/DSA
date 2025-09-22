import java.util.*;

public class Solution {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        
        // build one row (works in Java 11+ using repeat)
        String row = "* ".repeat(n).trim();
        
        // print the row n times
        for (int i = 0; i < n; i++) {
            System.out.println(row);
        }
        
        sc.close();
    }
}
