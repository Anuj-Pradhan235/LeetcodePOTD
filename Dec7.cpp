class Solution {
public:
    string largestOddNumber(string num) {
        string res="";
        for(int i=num.length()-1;i>=0;i--){
            int n=num[i]-'0';
            if(n&1){
                res=num.substr(0,i+1);
                break;
            }
        }
        return res;
    }
};