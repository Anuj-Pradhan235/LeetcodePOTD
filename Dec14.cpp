class Solution {
public:
    vector<vector<int>> onesMinusZeros(vector<vector<int>>& grid) {
       int m=grid.size(),n=grid[0].size();
       vector<int>zerosRow(m,0);
       vector<int>onesRow(m,0);

       vector<int>zerosCol(n,0);
       vector<int>onesCol(n,0);
       for(int row=0;row<m;row++){
           int sumOne=0,sumZero=0;
           for(int col=0;col<n;col++){
               if(grid[row][col]==0)sumZero++;
               else sumOne++;
           }
           onesRow[row]=sumOne;
           zerosRow[row]=sumZero;
       }
       for(int col=0;col<n;col++){
           int sumOne=0,sumZero=0;
           for(int row=0;row<m;row++){
               if(grid[row][col]==0)sumZero++;
               else sumOne++;
           }
           onesCol[col]=sumOne;
           zerosCol[col]=sumZero;
       }
       for(int row=0;row<m;row++){
           for(int col=0;col<n;col++){
               grid[row][col]=onesRow[row]+onesCol[col]-zerosRow[row]-zerosCol[col];
           }
       }
       return grid;


    }
};