//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// User function Template for C++

// arr is the array
// n is the number of element in array
class Solution {
public:
    void sumArray(vector<int> &arr) {
        int totalSum = 0;
        for (int num : arr) {
            totalSum += num;
        }

        for (int i = 0; i < arr.size(); i++) {
            arr[i] = totalSum - arr[i];
        }
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
        vector<int> arr;
        stringstream ss(input);
        int num;
        while (ss >> num)
            arr.push_back(num);
        Solution ob;
        ob.sumArray(arr);
        for (auto &i : arr)
            cout << i << " ";
        cout << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends