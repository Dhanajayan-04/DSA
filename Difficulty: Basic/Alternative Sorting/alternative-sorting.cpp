//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {

  public:
    vector<int> alternateSort(vector<int>& arr) {
        int n=arr.size();
        sort(arr.begin(),arr.end());
        int left=0,right=n-1;
        vector<int> result;
        while(left<=right){
            if(left!=right){
                result.push_back(arr[right--]); // max
                result.push_back(arr[left++]); // min
            }else{
                result.push_back(arr[left++]); // last middle element
            }
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
        vector<int> ans = obj.alternateSort(arr);
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends