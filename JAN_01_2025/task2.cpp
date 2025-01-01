#include <bits/stdc++.h>
using namespace std;
    bool canJump(vector<int>& nums) {
        int maxIndx = 0;
        for(int i=0; i<nums.size();i++){
            if(i>maxIndx){
                return false;
            }
            int temp = i+nums[i];
            maxIndx = max(temp,maxIndx);
            if(maxIndx>=nums.size()-1){
                return true;
            }
        }
        return false;
    }
    int main(){
        vector<int>nums;
        nums = {2,3,1,1,4};
        if(canJump(nums)){
            cout<<"True"<<endl;
        }
        else{
            cout<<"False"<<endl;
        }
    }
