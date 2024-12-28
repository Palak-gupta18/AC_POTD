#include <bits/stdc++.h>
using namespace std;
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
        int x = original.size();
        if(x!=m*n){
          return vector<vector<int>>(); 
        }
        vector<vector<int>> ans(m, vector<int>(n)); 
        int indx=0;
        for(int i=0;i<m; i++){
            for(int j=0;j<n; j++){
                ans[i][j] = original[indx];
                indx++;
            }
        }
        return ans;
    }
   int main(){
    vector<int>original;
    original = {1,2,3,4};
    int m=2;
    int n=2;
   construct2DArray(original,m,n);
   }
