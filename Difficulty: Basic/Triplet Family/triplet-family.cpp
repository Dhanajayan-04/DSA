//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    bool findTriplet(vector<int>& arr) {
        // Your codesort(arr.begin(), arr.end());
        sort(arr.begin(),arr.end());
        int n = arr.size();
        
        // Iterate through each element starting from the third element
        for (int i = 2; i < n; i++) {
            int target = arr[i];  // arr[i] is the "third element" in the triplet
            int left = 0, right = i - 1;
            
            // Two-pointer technique to find a pair that sums to arr[i]
            while (left < right) {
                int pairSum = arr[left] + arr[right];
                
                if (pairSum == target) {  // Found the pair
                    return true;
                } else if (pairSum < target) {
                    left++;
                } else {
                    right--;
                }
            }
        }
        
        // If no triplet is found, return false
        return false;
    }
};


//{ Driver Code Starts.

int main() {
    string ts;
    getline(cin, ts);
    int t = stoi(ts);
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution obj;
        bool res = obj.findTriplet(arr);
        if (res)
            cout << "true" << endl;
        else
            cout << "false" << endl;
        // cout << res << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends