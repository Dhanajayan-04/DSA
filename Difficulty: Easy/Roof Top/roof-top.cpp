
class Solution {
  public:
    // Function to find maximum number of consecutive steps
    // to gain an increase in altitude with each step.
    int maxStep(vector<int>& arr) {
        // Your code here
        int n=arr.size();
        int maxSteps=0;
        int currentSteps=0;
        
        for(int i=1;i<n;i++){
            if(arr[i]>arr[i-1]){
                currentSteps++;
                maxSteps=max(currentSteps,maxSteps);
            }else{
                currentSteps=0;
            }
        }
        return maxSteps;
    }
};