class Solution {
public:
    vector<int> maxKDistinct(vector<int>& nums, int k) {
        unordered_set<int> st(nums.begin(), nums.end());

        vector<int> uniqueNums(st.begin(),st.end());

        sort(uniqueNums.begin(), uniqueNums.end(), greater<int>());

        if (uniqueNums.size() > k) {
            uniqueNums.resize(k);
        }
        return uniqueNums; 
    }
};