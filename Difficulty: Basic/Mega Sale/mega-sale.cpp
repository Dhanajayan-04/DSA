class Solution {
  public:
    int maxProfit(int m, vector<int> &arr) {
        // Step 1: Collect only useless laptops (negative prices)
        vector<int> useless;
        for(int price : arr) {
            if(price < 0)
                useless.push_back(price);
        }
        
        // Step 2: Sort useless laptops by price ascending (more negative first)
        sort(useless.begin(), useless.end());
        
        // Step 3: Sell up to m most negative laptops
        int profit = 0;
        for(int i = 0; i < useless.size() && i < m; i++) {
            profit += -useless[i]; // add absolute value
        }
        
        return profit;
    }
};
