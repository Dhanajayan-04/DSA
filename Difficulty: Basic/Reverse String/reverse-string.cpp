// User function Template for C++

// complete the function
// the function should return the reversed string
string reverseString(string &s) {
    // code here
    string rev="";
    int n=s.length();
    for(int i=n-1;i>=0;i--){
        rev+=s[i];
    }
    return rev;
}