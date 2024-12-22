 #include <iostream>
 #include <vector>
 using namespace std;
 int singleNumber(vector<int>& nums) {
     int size = nums.size();
     int ans = 0;
      for(int i=0; i<size; i++){
      ans^=nums[i];
    }
       return ans;
    }
  int main(){
        vector<int>nums;
        nums = {1,2,3,2,3,4,4};
        int result = singleNumber(nums);
        cout<<"Single Number : "<<result<<endl;
    }
