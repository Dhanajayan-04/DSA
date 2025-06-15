
class Solution {
  public:
    int findClosest(vector<int>& arr, int k) {
        // Complete the function
        int n=arr.size();
        int minDiff=INT_MAX;
        int closestElement=arr[0];
        
        for(int i=0;i<n;i++){
            int diff=abs(arr[i]-k);
            if(diff<minDiff){
                minDiff=diff;
                closestElement=arr[i];
            }
            else if(diff==minDiff && arr[i]>closestElement){
                closestElement=arr[i];
            }
        }
        return closestElement;
    }
};