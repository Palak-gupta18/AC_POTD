#include <bits/stdc++.h>
using namespace std;
    void minOperations(string boxes) {
        int n = boxes.length();
        vector<int>ones;
        vector<int>ans;
        for(int i=0; i<n; i++){
            if(boxes[i]=='1'){
                ones.push_back(i);
            }
        }
        int j=0; 
        while(j<n){
            int count = 0;
            for(int i=0; i<ones.size(); i++){
                count+=(abs(j-ones[i]));
            }
            ans.push_back(count);
            j++;
        }
       for(int i=0; i<ans.size(); i++){
           cout<<ans[i]<<" ";
       }
    }
    int main(){
        string boxes = "110";
        minOperations(boxes);
        return 0;
    }
