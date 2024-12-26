#include <bits/stdc++.h>
using namespace std;
void trailingZeroes(int n){
    int count=0;
    int i=5;
    while(i<=n){
        int ans = n/i;
        count+=ans;
        i*=5;
    }
    cout<<count<<endl;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    trailingZeroes(n);
}
