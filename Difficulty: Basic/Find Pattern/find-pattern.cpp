int findPattern(string &s, string &p) {
    // code here
    int sLen = s.length();
    int pLen = p.length();

    // Traverse only till there's enough length in s to match p
    for (int i = 0; i <= sLen - pLen; i++) {
        int j;
        // Check if pattern p matches starting at index i
        for (j = 0; j < pLen; j++) {
            if (s[i + j] != p[j]) {
                break;
            }
        }
        // If the inner loop completed, pattern matched
        if (j == pLen) {
            return i;
        }
    }

    // If not found
    return -1;
}