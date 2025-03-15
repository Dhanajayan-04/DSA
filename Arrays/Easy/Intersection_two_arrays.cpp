#include <bits/stdc++.h>
using namespace std;

void findIntersection(vector<int>& arr1, vector<int>& arr2) {
    unordered_set<int> s1(arr1.begin(), arr1.end()); // Store elements of arr1 in a set
    vector<int> intersection;

    for (int num : arr2) {
        if (s1.find(num) != s1.end()) {
            intersection.push_back(num);
            s1.erase(num); // Prevent duplicates in output
        }
    }

    cout << "Intersection: ";
    if (intersection.empty()) {
        cout << "No common elements";
    } else {
        for (int num : intersection) {
            cout << num << " ";
        }
    }
    cout << endl;
}

int main() {
    int n1, n2;
    cin >> n1;
    vector<int> arr1(n1);
    for (int i = 0; i < n1; i++) {
        cin >> arr1[i];
    }
    cin >> n2;
    vector<int> arr2(n2);
    for (int i = 0; i < n2; i++) {
        cin >> arr2[i];
    }
    findIntersection(arr1, arr2);
    return 0;
}

