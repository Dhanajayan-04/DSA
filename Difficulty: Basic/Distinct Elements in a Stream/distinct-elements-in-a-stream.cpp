//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    vector<int> getDistinct(vector<int> &arr) {
        unordered_map<int, int> freq;
        vector<int> result;
        int distinctCount = 0;

        for (int x : arr) {
            if (x > 0) {
                freq[x]++;
                if (freq[x] == 1) distinctCount++;
            } else {
                int val = abs(x);
                if (freq[val] > 0) {
                    freq[val]--;
                    if (freq[val] == 0) distinctCount--;
                }
            }
            result.push_back(distinctCount);
        }
        return result;
    }
};



//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        string input;
        getline(cin, input);
        stringstream ss(input);
        int num;
        vector<int> arr;
        while (ss >> num)
            arr.push_back(num);

        Solution ob;
        vector<int> results = ob.getDistinct(arr);
        for (auto &num : results)
            cout << num << " ";
        cout << endl;
        cout << "~\n";
    }
}

// } Driver Code Ends