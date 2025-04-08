//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution {
  public:
    string longest(vector<string>& arr) {
        string longest="";
        for(const string& s: arr){
            if(s.length()>longest.length()){
                longest = s;
            }
        }
        return longest;
    }
};



//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<string> names;
        string input1;
        getline(cin, input1);
        stringstream ss1(input1);
        string str;
        while (ss1 >> str) {
            names.push_back(str);
        }
        Solution obj;
        string res = obj.longest(names);
        cout << res << "\n~\n";
    }
}

// } Driver Code Ends