// User function template for C++

class Solution {
  public:
    vector<vector<int>> getPairs(vector<int>& arr) {
        // code here
        unordered_set<int> seen;
        set<pair<int, int>> uniPairs;
        
        for(int num:arr){
            if(seen.find(-num)!=seen.end()){
                int a=min(num, -num);
                int b=max(num, -num);
                uniPairs.insert({a,b});
            }
            seen.insert(num);
        }
        
        vector<vector<int>> result;
        for(auto& p:uniPairs){
            result.push_back({p.first,p.second});
        }
        
        sort(result.begin(),result.end());
        return result;
    }
};