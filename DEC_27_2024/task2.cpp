#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t!=0){
        long long n;
        cin>>n;
        int ans;
        for(long long i=1; ; i++){
            if(n%i!=0){
                ans = i-1;
                break;
            }
        }
        cout<<ans<<endl;
        t--;
    }
    return 0;
}
