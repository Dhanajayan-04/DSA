//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    // Function to find the difference between the maximum and minimum frequency of elements.
    int findDiff(vector<int>& arr) {
        unordered_map<int, int> freq;

        // Count frequency of each element
        for (int num : arr) {
            freq[num]++;
        }

        // If only one unique element is present
        if (freq.size() == 1)
            return 0;

        int maxFreq = INT_MIN;
        int minFreq = INT_MAX;

        // Find maximum and minimum frequencies
        for (auto it : freq) {
            maxFreq = max(maxFreq, it.second);
            minFreq = min(minFreq, it.second);
        }

        return maxFreq - minFreq;
    }
};


//{ Driver Code Starts.

int main() {
    string ts;
    getline(cin, ts);
    int t = stoi(ts);

    Solution ob;
    while (t--) {
        string line;
        getline(cin, line);
        stringstream ss(line);
        vector<int> nums;
        int num;
        while (ss >> num) {
            nums.push_back(num);
        }
        cout << ob.findDiff(nums) << endl;
    }
    return 0;
}

// } Driver Code Ends