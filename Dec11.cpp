class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        int n=arr.size();
        if(n==1)return arr[0];
        int cnt=n/4;
        int i=0;
        while(i<n-1){
            int freq=1;
            while((i<n-1)&&(arr[i]==arr[i+1])){
                freq++;
                i++;
            }
            if(freq>cnt)return arr[i-1];
            i++;
        }
        return -1;
    }
};