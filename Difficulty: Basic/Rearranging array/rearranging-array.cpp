//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends



class Solution {
  public:
    vector<int> Rearrange(vector<int> arr) {
        // code here
        sort(arr.begin(),arr.end());
        int n=arr.size();
        vector<int>result;
        int i=0,j=n-1;
        while(i<=j){
            if(i<=j)result.push_back(arr[i++]);
            if(i<=j)result.push_back(arr[j--]);
        }
        return result;
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
        Solution obj;
        vector<int> ans = obj.Rearrange(arr);
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends