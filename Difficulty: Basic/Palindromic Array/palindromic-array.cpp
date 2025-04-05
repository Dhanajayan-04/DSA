//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

/*Complete the function below*/

class Solution {
  public:
    bool isPalinArray(vector<int> &arr) {
        int n=arr.size();
        bool is=false;
        for(int i=0;i<n;i++){
            int r=arr[i];
            int ld=0;
            int rev=0;
            while(arr[i]!=0){
                ld=arr[i]%10;
                rev = rev*10 +ld;
                arr[i]=arr[i]/10;
            }
            if(r!=rev){
                return false;
            }
        }
        return true;
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

        cout << (ob.isPalinArray(arr) ? "true" : "false") << endl;
        cout << "~" << endl;
    }

    return 0;
}

// } Driver Code Ends