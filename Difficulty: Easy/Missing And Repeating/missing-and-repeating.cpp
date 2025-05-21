class Solution {
  public:
    vector<int> findTwoElement(vector<int>& arr) {
        // code here
        int n=arr.size();
        long long repnum=0,total=(long long)n*(n+1)/2,sum=0;
        
        sort(arr.begin(),arr.end());
        
        for(int i=0;i<n;i++){
            sum+=arr[i];
            
            if(i<n-1 && arr[i]==arr[i+1]){
                repnum=arr[i];
            }
        }
        int missing=total-(sum-repnum);
        return {repnum, missing};
    }
};