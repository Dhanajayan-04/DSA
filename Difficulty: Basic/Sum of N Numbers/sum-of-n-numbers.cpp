class Solution {
  public:
    int sumOfFirstN(int n) {
        // code here
        int sum=0;
        for(int i=1;i<=n;i++){
            sum+=i;
        }
        return sum;
    }
};
