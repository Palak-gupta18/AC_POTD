#include <bits/stdc++.h>
using namespace std;
   int maxIncreaseKeepingSkyline(vector<vector<int>>& grid) {
        vector<int>maxRows;
        vector<int>maxCols;
        int n = grid.size();
         for(int i=0; i<n; i++){
            int maxRow = -1;
            for(int j=0; j<n; j++){
               maxRow = max(maxRow, grid[i][j]);
            }
            maxRows.push_back(maxRow);
         }
        for(int i=0; i<n; i++){
            int maxCol = -1;
            for(int j=0; j<n; j++){
               maxCol = max(maxCol, grid[j][i]);
            }
            maxCols.push_back(maxCol);
         }
         int count =0;
         for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                count+=(min(maxRows[i], maxCols[j])-grid[i][j]);
            }
         }
         return count;
    }
int main(){
   vector<vector<int>>grid;
   grid = {{3,0,8,4},{2,4,5,7},{9,2,6,3},{0,3,1,0}};
  int res =  maxIncreaseKeepingSkyline(grid);
  cout<<res<<endl;
  return 0;
}
