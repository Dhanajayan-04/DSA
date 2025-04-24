//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

/*You are required to complete the function*/
class Solution {
  public:
    int findMaxProduct(vector<int>& arr, int k) {
        int n = arr.size();
        if (n < k) return 0;

        long long product = 1;
        for (int i = 0; i < k; i++) {
            product *= arr[i];
        }

        long long maxProduct = product;

        for (int i = k; i < n; i++) {
            product = product / arr[i - k] * arr[i];  // Slide the window
            maxProduct = max(maxProduct, product);
        }

        return static_cast<int>(maxProduct);
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
        string ks;
        getline(cin, ks);
        int k = stoi(ks);
        Solution obj;
        int res = obj.findMaxProduct(arr, k);
        cout << res << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends