class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
         unordered_map<int, int> freq;

        // Count the frequency of each number
        for (int num : nums) {
            freq[num]++;
        }

        // Find and return the number that appears only once
        for (auto pair : freq) {
            if (pair.second == 1) {
                return pair.first;
            }
        }

        return -1; // Should never reach here if input is valid
    }
};