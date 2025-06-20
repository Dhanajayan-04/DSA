// User function Template for C++

class Solution {
  public:
    int isPossible(int N, int arr[]) {
        // code here
        int totalSum=0;
        
        for(int i=0;i<N;i++){
            int num=arr[i];
            while(num>0){
                totalSum+=num%10;
                num/=10;
            }
        }
        if(totalSum%3==0){
            return 1;
        }else{
            return 0;
        }
    }
};