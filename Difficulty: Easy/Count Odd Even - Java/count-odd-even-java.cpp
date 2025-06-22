class Solution {
  public:

    void countOddEven(vector<int>& arr) {
        // code here
        int even=0,odd=0;
        int n=arr.size();
        for(int i=0;i<n;i++){
            if(arr[i]%2==0){
                even++;
            }else{
                odd++;
            }
        }
        cout << odd << " " << even << endl; 
    }
};