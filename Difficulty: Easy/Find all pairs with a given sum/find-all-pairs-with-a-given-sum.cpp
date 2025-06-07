class Solution {
  public:
    // Function to find all pairs with given sum.
    vector<pair<int, int>> allPairs(int target, vector<int> &arr1, vector<int> &arr2) {
        unordered_map<int, int> freqB;
        vector<pair<int, int>> result;

        // Store frequencies of elements in arr2
        for (int num : arr2) {
            freqB[num]++;
        }

        // Find complements in arr2 for each element in arr1
        for (int num : arr1) {
            int comp = target - num;
            if (freqB.find(comp) != freqB.end()) {
                int count = freqB[comp];
                while (count--) {
                    result.push_back({num, comp});
                }
            }
        }

        // Sort result by the first element
        sort(result.begin(), result.end());

        return result;
    }
};
