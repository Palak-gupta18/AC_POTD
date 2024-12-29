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
        vector<long long>vec(n);
        for(long long i=0;i<n; i++){
           cin>>vec[i];
        }
        long long sum=0;
        for(long long i=0; i<n; i++){
            sum+=abs(vec[i]);
        }
        int count=0;
        int opr=0;
        for(long long i=0; i<n; i++){
            if(vec[i]==0 && count==0){
                continue;
            }
            if(vec[i]<=0){
                count++;
            }
            else{
                if(count>0){
                    opr++;
                }
                count =0;
            }
        }
        if(count>0){
            opr++;
        }
        cout<<sum<<" "<<opr<<endl;
        t--;
    }
}
