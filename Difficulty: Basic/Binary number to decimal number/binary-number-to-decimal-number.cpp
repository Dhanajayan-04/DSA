class Solution {
  public:
    int binaryToDecimal(string &b) {
        // Code here.
        int decimal = 0;
        int n=b.length();
        
        for(int i=0;i<n;i++){
            if(b[i]=='1'){
                decimal+=pow(2,n-1-i);
            }
        }
        return decimal;
    }
};