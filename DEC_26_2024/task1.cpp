#include <bits/stdc++.h>
using namespace std;
int numberOfBeams(vector<string>& bank) {
        int m=bank.size();
        int n=bank[0].length();
        int ans=0;
         int previous=0;
        for(int i=0;i<m;i++){
            int sum=0;
            for(int j=0;j<n;j++){
                if(bank[i][j]=='1'){
                    sum++;
                }
            }
            if(sum>0){
                ans = ans + (sum*previous);
                previous = sum;
            }
        }
        return ans;
}
int main(){
    vector<string>bank;
    bank = {"011001","000000","010100","001000"};
    int ans = numberOfBeams(bank);
    cout<<ans<<endl;
}
