class Solution {
public:
    string largestGoodInteger(string num) {        
        vector<string>res;
        for(int i=0;i<=num.size()-3;i++){
            set<char>st;
            for(int j=i;j<i+3;j++)st.insert(num[j]);
            if(st.size()==1){
                string temp="";
                temp.push_back(num[i]);
                temp.push_back(num[i]);
                temp.push_back(num[i]);
                res.push_back(temp);
            }
        }
        if(res.size()==0)return "";
        sort(res.begin(),res.end());
        return res[res.size()-1];
    }
};