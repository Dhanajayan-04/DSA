//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    bool check_elements(int arr[], int n, int A, int B) {
        int rangeSize=B-A+1;
        if(rangeSize > 1e6) return false;
        bool hash[1000001] = {false};
        for(int i=0;i<n;i++){
            if(arr[i]>=A && arr[i]<=B){
                hash[arr[i]]=true; 
            }
        }
        for(int i=A;i<=B;i++){
            if(!hash[i]){
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
    while (t--) {
        int n, A, B;
        cin >> n >> A >> B;
        int a[n];
        for (int i = 0; i < n; ++i)
            cin >> a[i];

        Solution ob;
        if (ob.check_elements(a, n, A, B))
            cout << "True";
        else
            cout << "False";

        cout << "\n";

        cout << "~"
             << "\n";
    }
    return 0;
}

// } Driver Code Ends