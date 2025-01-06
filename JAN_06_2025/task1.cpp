#include <bits/stdc++.h>
using namespace std;
   int findFloor(vector<int>& arr, int k) {
        int start = 0;
        int end = arr.size()-1;
        int ans = -1;
        while(start<=end){
            int mid = start + (end-start)/2;
            if(arr[mid]==k){
                ans = mid;
                break;
            }
            else if(arr[mid]<k){
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
    vector<int>arr;
    arr = {1, 2, 8, 10, 11, 12, 19};
    int k = 0;
    int result = findFloor(arr,k);
    cout<<result<<endl;
    return 0;
}
