// User function template for C++
class Solution {
  public:
    string removeDuplicates(string &s) {
        // code here
        vector<bool>seen(256, false);
        string result;
        
        for(char ch:s){
            if(!seen[ch]){
                seen[ch]=true;
                result+=ch;
            }
        }
        return result;
    }
};