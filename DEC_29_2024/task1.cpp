#include <bits/stdc++.h>
using namespace std;
bool isAlmostPrime(int num){
    set<int>s;
    for(int i=2; i<=num; i++){
        if(num%i==0){
            s.insert(i);
            num/=i;
            i--;
        }
    }
    if(s.size()==2){
        return true;
    }
    return false;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    int count=0;
    for(int i=1;i<=n;i++){
        if(isAlmostPrime(i)){
            count++;
        }
    }
    cout<<count<<endl;
}
