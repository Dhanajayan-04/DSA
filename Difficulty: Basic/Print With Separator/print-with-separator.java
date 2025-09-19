import java.util.Scanner;

public class Solution {
    public static void utility(Scanner scn) {
        String a = scn.nextLine();
        String b = scn.nextLine();
        String separator = scn.nextLine();
        
        // print with separator
        System.out.println(a + separator + b);
    }

    public static void main(String[] args) {
        Scanner scn = new Scanner(System.in);
        utility(scn);
    }
}
