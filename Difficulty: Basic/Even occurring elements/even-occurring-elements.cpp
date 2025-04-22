//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    vector<int> findEvenOccurrences(vector<int>& arr) {
        unordered_map<int, int> freq;
        
        for(int num:arr){
            freq[num]++;
        }
        
        vector<int> result;
        set<int> added;
         
        for (int num : arr) {
        if (freq[num] % 2 == 0 && added.find(num) == added.end()) {
            result.push_back(num);
            added.insert(num);
            }
        }
          if (result.empty()) return {-1};
          return result;
    }
};



//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore(); // To ignore the newline character after the number of test cases
    while (t--) {
        string input;
        getline(cin, input);
        stringstream ss(input);
        int num;
        vector<int> arr;
        while (ss >> num)
            arr.push_back(num);

        Solution ob;
        vector<int> result = ob.findEvenOccurrences(arr);
        for (int num : result) {
            cout << num << " ";
        }
        cout << endl << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends