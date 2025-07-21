class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
         unordered_map<int, int> freq;

        // Count the frequency of each number
        int a=0;
        for (int num : nums) {
            a=a^num;
        }
        return a; // Should never reach here if input is valid
    }
};