//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int thirdLargest(vector<int> &arr) {
        if (arr.size() < 3) return -1;

        int first = INT_MIN, second = INT_MIN, third = INT_MIN;

        for (int num : arr) {
            if (num >= first) {
                third = second;
                second = first;
                first = num;
            }
            else if (num >= second) {
                third = second;
                second = num;
            }
            else if (num >= third) {
                third = num;
            }
        }

        return third;
    }
};



//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input); // Read the entire line for the array elements
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution ob;
        cout << ob.thirdLargest(arr) << endl;
        cout << "~" << endl;
    }

    return 0;
}

// } Driver Code Ends