// User function Template for C++

class Solution {
  public:
    vector<int> increment(vector<int> arr, int N) {
        // code here
        int carry =1;
        for(int i=N-1;i>=0;i--){
            int sum=arr[i]+carry;
            
            if(sum>=10){
                arr[i]=0;
                carry=1;
            }else{
                arr[i]=sum;
                carry=0;
                break;
            }
        }
        if(carry==1){
            arr.insert(arr.begin(),1);
        }
        return arr;
    }
};