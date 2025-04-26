//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int getCount(vector<int> &arr, int num1, int num2) {
        int n = arr.size();
        int left = -1, right = -1;
        
        for (int i = 0; i < n; i++) {
            if (arr[i] == num1 && left == -1) {
                left = i; // store the first occurrence of num1
            }
            if (arr[i] == num2) {
                right = i; // always update to latest occurrence of num2
            }
        }
        
        if (left == -1 || right == -1 || left >= right) {
            return 0; // if num1 or num2 not found, or invalid order
        }
        
        return right - left - 1; // number of elements between them
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
        getline(cin, input);
        stringstream ss(input);
        int num;
        while (ss >> num) {
            arr.push_back(num);
        }
        int num1, num2;
        cin >> num1 >> num2;
        cin.ignore();
        Solution ob;
        cout << ob.getCount(arr, num1, num2) << "\n";
        cout << "~\n";
    }
    return 0;
}

// } Driver Code Ends