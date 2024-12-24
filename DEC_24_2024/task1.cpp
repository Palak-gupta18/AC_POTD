#include<bits/stdc++.h>
using namespace std;
 void sortColors(vector<int>& nums) {
     int size = nums.size();
     for(int i=0; i<size; i++){
        for(int j=i+1; j<size; j++){
            if(nums[i]>nums[j]){
               swap(nums[i], nums[j]);
            }
        }
     }
    }
  int main(){
        vector<int>nums;
        nums= {2,0,2,1,1,0};
        sortColors(nums);
        for(int n : nums){
            cout<<n<<" ";
        }
        return 0;
    }
