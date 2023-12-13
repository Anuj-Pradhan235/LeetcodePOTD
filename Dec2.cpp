class Solution {
    private:
    bool isMatch(string &str,unordered_map<char,int>freq){
        for(auto i:str){
            if(freq[i]>0)freq[i]--;
            else return 0;
        }
        return 1;
    }
public:
    int countCharacters(vector<string>& words, string chars) {
        int cnt=0;
        unordered_map<char,int>freq;
        for(auto i:chars)freq[i]++;
        for(auto i:words){
            if(isMatch(i,freq))cnt+=i.length();
        }
        return cnt;
    }
};