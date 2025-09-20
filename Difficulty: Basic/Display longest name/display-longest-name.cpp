
class Solution {
public:
    string longest(vector<string>& arr) {
        string longest = arr[0];  // assume first element is longest initially
        
        for (int i = 1; i < arr.size(); i++) {
            if (arr[i].length() > longest.length()) {
                longest = arr[i];  // update if strictly longer
            }
            // if equal, keep the first one (do nothing)
        }
        
        return longest;
    }
};

