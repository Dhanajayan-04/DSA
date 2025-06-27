// User function Template for C++

class Solution {
public:
    int findDuplicate(const std::vector<int>& arr, int k) {
        unordered_map<int, int> freq;

        // Count frequencies
        for (int num : arr) {
            freq[num]++;
        }

        int result = INT_MAX;
        bool found = false;

        // Correct iteration over map
        for (auto& entry : freq) {
            if (entry.second == k) {
                result = min(result, entry.first);
                found = true;
            }
        }

        return found ? result : -1;
    }
};
