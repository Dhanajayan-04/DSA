class Solution {
  public:
    string isInRange(int N) {
        // code here
        string res;
        
        switch(N){
            case 1:
            res = "one";
            break;
            case 2:
            res = "two";
            break;
            case 3:
            res = "three";
            break;
            case 4:
            res = "four";
            break;
            case 5:
            res = "five";
            break;
            case 6:
            res = "six";
            break;
            case 7:
            res = "seven";
            break;
            case 8:
            res = "eight";
            break;
            case 9:
            res = "nine";
            break;
            case 10:
            res = "ten";
            break;
            default:
            res = "not in range";
            break;
        }
        return res;
    }
};