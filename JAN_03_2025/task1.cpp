#include <bits/stdc++.h>
using namespace std;
    int findPlatform(vector<int>& arr, vector<int>& dep) {
         int n = arr.size();
         sort(arr.begin(),arr.end());
         sort(dep.begin(), dep.end());
         int i=0;
         int j=0;
         int count=0;
         int platforms = 0;
         while(i<n){
             if(arr[i]<=dep[j]){
                 count++;
                 i++;
             }
             else{
                 count--;
                 j++;
             }
             platforms = max(platforms,count);
         }
         return platforms;
    }
int main(){
   vector<int>arr;
   vector<int>dep;
   arr = {900, 940, 950, 1100, 1500, 1800};
   dep = {910, 1200, 1120, 1130, 1900, 2000};
  int res = findPlatform(arr,dep);
  cout<<res<<endl;
  return 0;
}
