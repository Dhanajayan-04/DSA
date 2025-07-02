

class Solution {
  public:
    int findMissing(vector<int>& arr1, vector<int>& arr2) {
        // your code
        int sum1=0,sum2=0;
        
        for(int i=0;i<arr1.size();i++){
            sum1+=arr1[i];
        }
        
        for(int i=0;i<arr2.size();i++){
            sum2+=arr2[i];
        }
        return sum1 - sum2;
    }
};