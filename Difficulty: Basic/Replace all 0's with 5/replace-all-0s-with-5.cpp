//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

/*you are required to complete this method*/
class Solution {
  public:
    int convertFive(int n) {
        string s=to_string(n);
        for(char &ch :s){
            if(ch =='0'){
                ch ='5';
            }
        }
        return stoi(s);
    }
};


//{ Driver Code Starts.
int main() {
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        Solution ob;
        cout << ob.convertFive(n) << endl;

        cout << "~"
             << "\n";
    }
}
// } Driver Code Ends