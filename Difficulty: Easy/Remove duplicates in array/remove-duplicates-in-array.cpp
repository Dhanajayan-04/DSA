class Solution {
  public:
    vector<int> removeDuplicate(vector<int>& arr) {
        // code here
        bool seen[101] ={false};
        vector<int> result;
        
        for(int num:arr){
            if(!seen[num]){
                result.push_back(num);
                seen[num]=true;
            }
        }
        return result;
    }
};