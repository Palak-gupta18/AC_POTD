#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    int k;
    cin>>k;
    int prblms=0;
    int contestTime = 240;
    for(int i=0;i<=n; i++){
        int total_time = ((5*i*(i+1))/2) + k;
        if(total_time<=contestTime){
            prblms = i;
        }
        else{
            break;
        }
    }
    cout<<prblms<<endl;
    return 0;
}
