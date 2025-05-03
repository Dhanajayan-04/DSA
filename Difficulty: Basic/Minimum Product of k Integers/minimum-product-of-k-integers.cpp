//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends



class Solution {
  public:
    int minProduct(vector<int> &arr, int k) {
        // Complete the function
        int n=arr.size();
        priority_queue<int> p;
        for(int i=0;i<n;i++){
            p.push(arr[i]);
            if(p.size()>k)
                p.pop();
        }
        long long int product=1;
        while(!p.empty()){
            product*=p.top();
            product%=1000000007;
            p.pop();
        }
        return product;
    }
};


//{ Driver Code Starts.

int main() {
    string ts;
    getline(cin, ts);
    int t = stoi(ts);
    while (t--) {
        string ks;
        getline(cin, ks);
        int k = stoi(ks);
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution obj;
        int res = obj.minProduct(arr, k);
        cout << res << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends