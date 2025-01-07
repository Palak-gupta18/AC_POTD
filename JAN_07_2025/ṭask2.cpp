#include <bits/stdc++.h>
using namespace std;
int searchInsert(vector<int>& nums, int target) {
        int start = 0;
        int end = nums.size()-1;
        int ans;
        while(start<=end){
            int mid = start + (end-start)/2;
            if(nums[mid]==target){
               ans = mid;
               break;
            }
            else if(nums[mid]<target){
                start = mid+1;
                ans = start;
            }
            else{
                end = mid-1;
            }
        }
        return ans;
    }
int main(){
    vector<int>nums;
    nums = {1,3,5,6};
    int target = 5;
    int result = searchInsert(nums, target);
    cout<<result<<endl;
    return 0;
}
