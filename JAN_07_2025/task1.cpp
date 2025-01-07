#include <bits/stdc++.h>
using namespace std;
    int arrangeCoins(int n) {
      int start  = 1;
      int end = n;
      int ans = 1;
      while(start<=end){
          long long mid = start + (end-start)/2;
          long long check = mid*(mid+1)/2;
          if(check<=n){
            ans = mid;
            start = mid+1;
          }
          else{
            end = mid-1;
          }
      }
      return ans;
    }
int main(){
    int n = 5;
    int stairs = arrangeCoins(n);
    cout<<stairs<<endl;
    return 0;
}
