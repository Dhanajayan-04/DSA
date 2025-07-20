
class Solution {
  public:
    vector<int> common_digits(vector<int> nums) {
        // Code here
        set<int> digits;
        
        for(int num:nums){
            while(num>0){
                digits.insert(num%10);
                num/=10;
            }
        }
        
        vector<int> result(digits.begin(),digits.end());
        return result;
    }
};