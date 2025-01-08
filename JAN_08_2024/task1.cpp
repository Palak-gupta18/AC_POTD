    #include<bits/stdc++.h>
    using namespace std;
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size();
        int n = matrix[0].size();
        int row = 0;
        int cols = n-1;
        while(row<m && cols>=0){
            if(matrix[row][cols]==target){
                return true;
            }
            else if(matrix[row][cols]<target){
                row++;
            }
            else{
                cols--;
            }
        }
        return false;
    }
int main(){
    vector<vector<int>>matrix;
    matrix = {{1,3,5,7},{10,11,16,20},{23,30,34,60}};
    int target = 3;
    if(searchMatrix(matrix, target)){
        cout<<"True"<<endl;
    }
    else{
        cout<<"False"<<endl;
    }
    return 0;
}
