 #include <iostream>
 #include <vector>
 using namespace std;
 int minimumOperations(vector<int>& nums) {
        int opr = 0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]%3!=0){
                opr++;
            }
        }
        return opr;
    }
   int main(){
        vector<int>nums;
        nums = {1,2,3,4};
        int result = minimumOperations(nums);
        cout<<"Number of operations : "<<result<<endl;
    }
