class Solution {
public:
    int findEquilibrium(vector<int>& arr) {
        int totalSum = 0;

        // Calculate total sum
        for (int i = 0; i < arr.size(); i++) {
            totalSum += arr[i];
        }

        int leftSum = 0;

        // Find the equilibrium point
        for (int i = 0; i < arr.size(); i++) {
            totalSum -= arr[i]; // totalSum now becomes right sum

            if (leftSum == totalSum)
                return i; // return index if leftSum == rightSum

            leftSum += arr[i];
        }

        return -1; // no equilibrium index found
    }
};
