class Solution {
public:
    int totalMoney(int n) {
        int monDayMoney=1,sum=0;
        while(n){
            int i=1;
            int cnt=monDayMoney;
            while(i<=7&&n){
                sum+=cnt;
                cnt++;
                i++;
                n--;
            }
            monDayMoney++;
        }
        return sum;
    }
};