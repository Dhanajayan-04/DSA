#include <bits/stdc++.h>
using namespace std;

vector<int> RearrangebySign(vector<int> &arr,int n){
   
    vector<int> pos,neg,result(n);

    for(int i=0;i<n;i++){
        if(arr[i]>0){
            pos.push_back(arr[i]);
        }
        else{
            neg.push_back(arr[i]);
        }
    }

    int i=0,j=0,k=0;
    while(i<pos.size() && j<neg.size()){
        result[k++] = pos[i++];
        result[k++] = neg[j++];
    }

    while (i < pos.size()) result[k++] = pos[i++];

    while (j < neg.size()) result[k++] = neg[j++];

    return result;
}

int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    vector<int> ans=RearrangebySign(arr,n);
    for(int num : ans){
        cout << num << " ";
    }
    cout << endl;

    return 0;
}