#include <bits/stdc++.h>
using namespace std;

vector < int > FindUnion(int arr1[], int arr2[], int n, int m) {
  set < int > s;
  vector < int > Union;
  for (int i = 0; i < n; i++)
    s.insert(arr1[i]);
  for (int i = 0; i < m; i++)
    s.insert(arr2[i]);
  for (auto & it: s)
    Union.push_back(it);
  return Union;
}

int main(){
  int n,m;
  cin >> n >> m;
  int arr1[n];
  for(int i=0;i<n;i++){
    cin >> arr1[i];
  }
  int arr2[m];
  for(int i=0;i<n;i++){
    cin >> arr2[i];
  }
  vector < int > Union = FindUnion(arr1, arr2, n, m);
  cout << "Union of arr1 and arr2 is  " << endl;
  for (auto & val: Union)
    cout << val << " ";
  return 0;
}

