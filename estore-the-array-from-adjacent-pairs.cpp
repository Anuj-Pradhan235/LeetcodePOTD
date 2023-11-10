class Solution {
private:
    void dfs(int node,vector<int>&res,unordered_map<int,bool>&vis,unordered_map<int,vector<int>>&adjLis){
        vis[node]=1;
        res.push_back(node);
        for(auto nbr:adjLis[node]){
            if(!vis[nbr])dfs(nbr,res,vis,adjLis);
        }
    }
public:
    vector<int> restoreArray(vector<vector<int>>& A) {
        unordered_map<int,vector<int>>adjLis;
        for(auto i:A){
            adjLis[i[0]].push_back(i[1]);
            adjLis[i[1]].push_back(i[0]);
        }
        int node=0;
       for(auto i:adjLis){
           if(i.second.size()==1){
               node=i.first;
               break;
           }
       }
       
        vector<int>res;
        unordered_map<int,bool>vis;
        dfs(node,res,vis,adjLis);
        return res;
    }
};