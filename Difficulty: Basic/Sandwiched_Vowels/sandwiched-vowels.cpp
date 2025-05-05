//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends



class Solution {
public:
    string Sandwiched_Vowel(string &s) {
        string result = "";
        int n = s.length();

        for (int i = 0; i < n; i++) {
            // Check if the current character is a vowel
            // AND is between two consonants (not at start or end)
            if (i > 0 && i < n - 1 &&
                isVowel(s[i]) &&
                !isVowel(s[i - 1]) &&
                !isVowel(s[i + 1])) {
                continue; // Skip this vowel (don't add to result)
            }
            result += s[i]; // Otherwise, keep the character
        }
        return result; // Return the final string
    }

private:
    // Helper function to check if a character is a vowel
    bool isVowel(char c) {
        return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
    }
};


//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution obj;
        string ans = obj.Sandwiched_Vowel(s);
        cout << ans << endl;

        cout << "~"
             << "\n";
    }

    return 0;
}
// } Driver Code Ends