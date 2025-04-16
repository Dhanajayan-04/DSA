//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends

class Solution {
  public:
    // Function to find the minimum value required to balance the array.
    int minValueToBalance(vector<int> &arr) {
        int n=arr.size();
        int sumleft=0;
        int sumright=0;
        for(int i=0;i<n/2;i++){
            sumleft+=arr[i];
        }
        for(int i=n/2;i<n;i++){
            sumright+=arr[i];
        }
        return abs(sumright-sumleft);
    }
};



//{ Driver Code Starts.

// Driver program to test above function
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution ob;
        int ans = ob.minValueToBalance(arr);
        cout << ans << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends