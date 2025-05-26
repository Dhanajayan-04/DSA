class Solution {
  public:
    int minDist(vector<int>& arr, int x, int y) {
        // code here
        int n=arr.size();
        int minDist=INT_MAX;
        int prevIndex = -1;
        int prevElement = -1;
        bool foundX = false, foundY = false;
        
        for(int i=0;i<n;i++){
            if(arr[i]==x || arr[i]==y){
                if (arr[i] == x) foundX = true;
                if (arr[i] == y) foundY = true;
                
                if (prevIndex != -1 && arr[i] != prevElement) {
                minDist = min(minDist, i - prevIndex);
                }
                prevIndex = i;
                prevElement = arr[i];
            }
        }
        if (!foundX || !foundY) return -1;
        return minDist;
    }
};