class Solution {
    public static int fibonacci(int n) {
        // Write your code here to calculate
        // to calculate the nth fibonacci number
        if(n==1 || n==2){
        return 1;
    }
    
    int a=1,b=1,c;
    for(int i=3;i<=n;i++){
        c=a+b;
        a=b;
        b=c;
        }
        return b;
    }
}
