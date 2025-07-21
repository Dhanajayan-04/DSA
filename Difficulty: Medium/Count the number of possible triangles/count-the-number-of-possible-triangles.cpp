class Solution {
  public:
    // Function to count the number of possible triangles.
    int countTriangles(vector<int>& arr) {
        // code here
        sort(arr.begin(),arr.end());
        int n=arr.size();
        int count =0;
        
        for(int i=n-1;i>0;i--){
            int j=0,k=i-1;
            while(j<k){
                if(arr[j]+arr[k]>arr[i]){
                    count+=k-j;
                    k--;
                    
                }else{
                    j++;
                }
            }
        }
        return count;
    }
};
