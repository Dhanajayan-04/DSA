//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    void segregateEvenOdd(vector<int>& arr) {
        vector<int> even,odd;
        for(int num:arr){
            if(num%2==0)
               even.push_back(num);
            else
               odd.push_back(num);
        }
        // sort the even and odd
        sort(even.begin(),even.end());
        sort(odd.begin(),odd.end());
        
        int i=0;
        for(int num:even)
        arr[i++]=num;
        for(int num:odd)
        arr[i++]=num;
        
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
        obj.segregateEvenOdd(arr);
        for (int i = 0; i < arr.size(); i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
        cout << "~" << endl;
        // string tl;
        // getline(cin, tl);
    }
    return 0;
}
// } Driver Code Ends