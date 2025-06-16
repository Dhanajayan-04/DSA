class Solution {
  public:
    int chocolates(int n, vector<int> &arr) {
        // code here
        int start=0;
        int end=n-1;
        
        while(start<end){
            if(arr[start]>=arr[end]){
                start++;
            }else{
                end--;
            }
        }
        return arr[start];
    }
};
