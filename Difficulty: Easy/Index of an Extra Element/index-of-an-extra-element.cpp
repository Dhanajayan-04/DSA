class Solution {
  public:
    int findExtra(vector<int>& a, vector<int>& b) {
        int n = b.size();
        int low = 0, high = n - 1, index = n;

        while (low <= high) {
            int mid = (low + high) / 2;

            if (a[mid] == b[mid]) {
                low = mid + 1;
            } else {
                index = mid;
                high = mid - 1;
            }
        }

        return index;  // index of the extra element in array a
    }
};
