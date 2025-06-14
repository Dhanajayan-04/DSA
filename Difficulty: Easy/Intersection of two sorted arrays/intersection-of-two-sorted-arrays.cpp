class Solution {
  public:
    // Function to return a list containing the intersection of two arrays.
    vector<int> intersection(vector<int> &arr1, vector<int> &arr2) {
        // Your code here
        int n=arr1.size();
        int m=arr2.size();
        int i=0,j=0;
        
        vector<int> result;
        
        while(i<n  && j<m){
            if(arr1[i]<arr2[j]){
                i++;
            }else if(arr1[i]>arr2[j]){
                j++;
            }else{
                if(result.empty() || result.back()!=arr1[i]){
                    result.push_back(arr1[i]);
                }
                i++;
                j++;
            }
        }
        return result;
    }
};