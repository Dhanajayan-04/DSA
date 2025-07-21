
class Solution {
  public:
    string decodedString(string &s) {
        // code here
        stack<int>ctStack;
        stack<string>stStack;
        string st="";
        int num=0;
        
        for(char ch:s){
            if(isdigit(ch)){
                num=num*10+(ch -'0');
            }
            
            else if(ch == '['){
                ctStack.push(num);
                stStack.push(st);
                num=0;
                st="";
            }
            else if(ch == ']'){
                int count = ctStack.top();
                ctStack.pop();
                string deco = stStack.top();
                stStack.pop();
                while(count--){
                    deco+=st;
                }
                st=deco;
                
            }else{
                st+=ch;
            }
        }
        return  st;
    }
};