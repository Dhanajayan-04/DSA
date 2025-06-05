class Solution {
  public:
    typedef long long int ll;

    long long int minValue(vector<int> &arr1, vector<int> &arr2) {
        // code here
        sort(arr1.begin(),arr1.end());
        sort(arr2.begin(),arr2.end(),greater<>());
        
        long long result=0;
        for(int i=0;i<arr1.size();i++){
            result+=(long long)arr1[i]*arr2[i];
        }
        return result;
    }
};