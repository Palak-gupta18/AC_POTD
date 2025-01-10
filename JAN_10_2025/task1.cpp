#include <bits/stdc++.h>
using namespace std;
  bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m =  matrix.size();
        int n = matrix[0].size();
        int row = 0;
        int col = n-1;
        while(row<m && col>=0){
            int val = matrix[row][col];
            if(val==target){
                return true;
            }
            if(val>target){
               col--;
            }
            else{
                row++;
            }
        }
        return false;
    }
int main(){
    vector<vector<int>>matrix;
    matrix = {{1,4,7,11,15},{2,5,8,12,19},{3,6,9,16,22},{10,13,14,17,24},
    {18,21,23,26,30}};
    int target =5;
    if(searchMatrix(matrix, target)){
        cout<<"TRUE"<<endl;
    }
    else{
        cout<<"False"<<endl;
    }
    return 0;
}
