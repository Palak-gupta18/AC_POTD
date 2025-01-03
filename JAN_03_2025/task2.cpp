#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t!=0){
    int n;
    cin>>n;
    vector<int>vec(n);
    for(int i=0; i<n; i++){
        cin>>vec[i];
    }
    int ones = 0;
    int zeroes = 0;
    for(int i=0; i<n; i++){
        if(vec[i]==1){
            ones++;
        }
       else if(vec[i]==0){
            zeroes++;
        }
    }
    long long ans = ones*(1LL<<zeroes);
    cout<<ans<<endl;
    t--;
    }
}
