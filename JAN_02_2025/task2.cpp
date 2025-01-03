#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    int k;
    cin>>k;
    vector<int>vec(n);
    for(int i=0;i<n; i++){
        cin>>vec[i];
    }
    int count = 0;
    for(int i=0; i<n;i++){
        if(vec[i]>=vec[k-1] && vec[i]>0){
            count++;
        }
        else{
            break;
        }
    }
    cout<<count<<endl;
}
