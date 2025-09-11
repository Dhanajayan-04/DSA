// User function template for Java
class Solution {
    public static int areAnagram(String S1, String S2) {
        // Step 1: Length check
        if (S1.length() != S2.length()) {
            return 0;
        }

        // Step 2: Frequency array for ASCII (256 chars)
        int[] count = new int[256];

        // Step 3: Increment for S1, Decrement for S2
        for (int i = 0; i < S1.length(); i++) {
            count[S1.charAt(i)]++;
            count[S2.charAt(i)]--;
        }

        // Step 4: Verify all counts are zero
        for (int c : count) {
            if (c != 0) {
                return 0;
            }
        }

        return 1;
    }
}
