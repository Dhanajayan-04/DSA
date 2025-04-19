//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int findUnique(int k, vector<int>& arr) {
        int result=0;
        //iterate through all 32 bits
        for(int i=0;i<32;i++){
            int bitsum=0;
            for(int num:arr){
                if((num >> i)&1){
                    bitsum+=1;
                }
            }
            if(bitsum%k!=0){
                result|=(1<<i);
            }
        }
        return result;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    cin.ignore(); // Ignore the newline character after the number of test cases
    while (t--) {
        int k;
        cin >> k;
        cin.ignore(); // Ignore the newline character after k
        string inputLine;
        getline(cin, inputLine);
        stringstream ss(inputLine);
        vector<int> arr;
        int num;
        while (ss >> num) {
            arr.push_back(num);
        }
        Solution obj;
        cout << obj.findUnique(k, arr) << endl;
        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends