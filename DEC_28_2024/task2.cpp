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
        vector<int>vec(n);
            int k=0;
        for(int i=0;i<n;i++){
            cin>>vec[i];
        }
        for(int i=0;i<n;i++){
            int diff = abs(vec[i]-(i+1));
            k = __gcd(k,diff);
        }
        cout<<k<<endl;
        t--;
    }
}
