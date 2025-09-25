import java.util.*;

class Solution {
    String uncommonChars(String s1, String s2) {
        HashSet<Character> set1 = new HashSet<>();
        HashSet<Character> set2 = new HashSet<>();
        
        for (char c : s1.toCharArray()) set1.add(c);
        for (char c : s2.toCharArray()) set2.add(c);

        TreeSet<Character> result = new TreeSet<>(); // keeps sorted

        for (char c : set1) {
            if (!set2.contains(c)) result.add(c);
        }
        for (char c : set2) {
            if (!set1.contains(c)) result.add(c);
        }

        StringBuilder sb = new StringBuilder();
        for (char c : result) sb.append(c);

        return sb.toString();
    }
}
