class Solution {
  public:
    vector<int> cppOperators(int A, int B) {
        // code here
        int add,sub,division,multiplic;
        add = A+B;
        multiplic = A*B;
        if(B>A){
            sub = B-A;
            division = B/A;
        }else{
            sub = A-B;
            division = A/B;
        }
        return {add,multiplic,sub,division};
    }
};