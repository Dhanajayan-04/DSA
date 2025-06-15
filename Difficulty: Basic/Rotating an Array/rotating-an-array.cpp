// User function template for C++

class Solution {
  public:
    void leftRotate(vector<int>& arr, int d) {
        // code here
        int n=arr.size();
        d=d%n;
        int temp[d];
        
        //first store the d elements in temp//
        for(int i=0;i<d;i++){
            temp[i]=arr[i];
        }
        
        //shift the remaining element to the left//
        for(int i=d;i<n;i++){
            arr[i-d]=arr[i];
        }
        
        //move the d elements to the end//
        for(int i=0;i<d;i++){
            arr[n-d+i]=temp[i];
        }
    }
};