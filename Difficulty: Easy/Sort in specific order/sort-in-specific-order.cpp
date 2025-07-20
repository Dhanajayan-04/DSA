class Solution {
  public:
    void sortIt(vector<int>& arr) {
        // code here
        vector<int> oddNums;
        vector<int> evenNums;
        
        for(int num:arr){
            if(num%2==0){
                evenNums.push_back(num);
            }else{
                oddNums.push_back(num);
            }
        }
        
        sort(oddNums.begin(), oddNums.end(), greater<int>()); //Desending
        sort(evenNums.begin(), evenNums.end()); //asending
        
        int i = 0;
        for (int num : oddNums)
            arr[i++] = num;
        for (int num : evenNums)
            arr[i++] = num;
    }
};