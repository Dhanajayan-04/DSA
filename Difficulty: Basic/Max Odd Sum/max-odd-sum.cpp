//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    // Function to find maximum odd subarray sum.
    int findMaxOddSum(vector<int> &arr) {
        int sum = 0;
        int min_pos_odd = INT_MAX;
        int max_neg_odd = INT_MIN;

        for (int num : arr) {
            if (num > 0) {
                sum += num;
                if (num % 2 != 0) {
                    min_pos_odd = min(min_pos_odd, num);
                }
            } else if (num % 2 != 0) {
                max_neg_odd = max(max_neg_odd, num);
            }
        }

        if (sum % 2 != 0) {
            return sum;
        }

        int option1 = (min_pos_odd != INT_MAX) ? sum - min_pos_odd : INT_MIN;
        int option2 = (max_neg_odd != INT_MIN) ? sum + max_neg_odd : INT_MIN;

        int result = max(option1, option2);
        return (result == INT_MIN) ? -1 : result;
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
        cout << ob.findMaxOddSum(arr) << endl;
        cout << "~\n";
    }
}

// } Driver Code Ends