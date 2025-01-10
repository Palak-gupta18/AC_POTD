#include <bits/stdc++.h>
using namespace std;
  bool search(vector<int>& nums, int target) {
        int start = 0;
        int end = nums.size()-1;
        while(start<=end){
             int mid = start + (end-start)/2;
             if(nums[mid]==target){
                return true;
             }
             if(nums[start]==nums[mid] && nums[mid]==nums[end]){
                start++;
                end--;
                continue;
             }
             if(nums[start]<=nums[mid]){
                if(target>=nums[start]&&target<nums[mid]){
                    end = mid-1;
                }
                else{
                    start = mid+1;
                }
             }
              else{
                if(target<=nums[end]&&target>nums[mid]){
                    start = mid+1;
                }
                else{
                    end = mid-1;
                }
             }
        }
        return false;
    }
int main(){
    vector<int>nums;
    nums = {2,5,6,0,0,1,2};
    int target = 0;
    if(search(nums, target)){
        cout<<"TRUE"<<endl;
    }
    else{
        cout<<"False"<<endl;
    }
    return 0;
}
