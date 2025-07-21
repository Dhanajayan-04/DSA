class Solution {
  public:
    int maxSubarraySum(vector<int> &arr) {
        // Code here
        int sum=arr[0];
        int maxsum=arr[0];
        for(int i=1;i<arr.size();i++){
            if(sum<0){
                sum=arr[i];
            }
            else{
                sum+=arr[i];
            }
            maxsum=max(maxsum,sum);
        }
        return maxsum;
    }
};