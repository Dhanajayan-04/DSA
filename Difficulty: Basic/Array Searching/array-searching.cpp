//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    // Function to search x in arr
    // arr: input array
    // X: element to be searched for
    int search(int arr[], int n, int x) {

        for(int i=0;i<n;i++){
            if(arr[i]==x){
                return i;
            }
        }
        return -1;
    }
};


//{ Driver Code Starts.

int main() {
    int testcases;
    cin >> testcases;
    cin.ignore(); // To ignore the newline character after reading testcases
    while (testcases--) {
        int arr[1000000];
        int x;
        string input;
        int size = 0;

        getline(cin, input); // Read the entire line for the array elements
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr[size++] = number;
        }

        getline(cin, input); // Read the next line for x
        stringstream ss2(input);
        ss2 >> x;

        Solution ob;
        cout << ob.search(arr, size, x) << endl; // Linear search
        cout << "~\n";
    }

    return 0;
}
// } Driver Code Ends