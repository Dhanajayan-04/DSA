//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

//  Function to multiply the sum of first half of the array with the sum of second half
//  of the array
class Solution {
  public:
    int multiply(vector<int> &arr) {
        int n=arr.size();
        int sumleft=0;
        int sumright=0;
        for(int i=0;i<n/2;i++){
            sumleft+=arr[i];
        }
        for(int i=(n/2);i<n;i++){
            sumright+=arr[i];
        }
        return sumleft*sumright;
    }
};


//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    cin.ignore();
    while (t--) // while testcases exist
    {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution ob;
        cout << ob.multiply(arr) << endl;
        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends