
class Solution {
  public:
    string reverse(string str) {
        // code here.
        int d=str.length();
        int left=0,right=d-1;
        while(left<right){
            if(!isalnum(str[left])){
                left++;
            }
            else if(!isalnum(str[right])){
                right--;
            }
            else{
                char temp=str[left];
                str[left]=str[right];
                str[right]=temp;
                left++;
                right--;
            }
        }
        return str;
    }
};