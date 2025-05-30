//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution {
  public:
    void Learning(int a[], int n, float &pos, float &neg, float &zero) {
        // Your code goes here
        int positivecount=0,negativecount=0,zerocount=0;
        for(int i=0;i<n;i++){
            if(a[i]>0){
                positivecount++;
            }else if(a[i]<0){
                negativecount++;
            }else{
                zerocount++;
            }
        }
        pos=(positivecount != 0) ? (float)n / positivecount:0;
        neg=(negativecount != 0) ? (float)n / negativecount:0;
        zero=(zerocount != 0) ? (float)n / zerocount:0;
    }
};


//{ Driver Code Starts.
int main()
{
    long long int t = 0;
    scanf("%lld", &t);
    while(t--)
    {
        int i, n; 
        scanf("%d", &n);
        int a[n+5];
        for(i=0; i<n; i++)
            scanf("%d", &a[i]);
            
        float pos=0, neg=0, zero=0;
        Solution ob;
        ob.Learning(a, n, pos, neg, zero);
        
        printf("%g\n%g\n%g\n", pos, neg, zero);
    
cout << "~" << "\n";
}
}

// } Driver Code Ends