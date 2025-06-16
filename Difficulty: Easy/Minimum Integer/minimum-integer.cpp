class Solution {
  public:
    int minimumInteger(int N, vector<int> &A) {
        // code here
        long long sum=0;
        
        for(int i=0;i<N;i++){
            sum+=A[i];
        }
        
        long long target=(sum+N-1)/N;
        
        int minvalue=INT_MAX;
        for(int i=0;i<N;i++){
            if(A[i]>=target && A[i]<minvalue){
                minvalue=A[i];
            }
        }
        return minvalue;
    }
};
