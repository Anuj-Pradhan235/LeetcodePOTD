class Solution {
public:
    int numSpecial(vector<vector<int>>& mat) {
        int cnt=0;
        int n=mat.size(),m=mat[0].size();
        vector<int>rowSum(n,0);
        vector<int>colSum(m,0);
        for(int i=0;i<n;i++){
            int sumRow=0;
            for(int j=0;j<m;j++)sumRow+=mat[i][j];
            rowSum[i]=sumRow;
        }
         for(int i=0;i<m;i++){
            int sumCol=0;
            for(int j=0;j<n;j++)sumCol+=mat[j][i];
            colSum[i]=sumCol;
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(mat[i][j]){
                    rowSum[i]--;
                    colSum[j]--;
                    if(rowSum[i]==0&&colSum[j]==0)cnt++;
                    rowSum[i]++;
                    colSum[j]++;
                }
            }
        }
        return cnt;
    }
};