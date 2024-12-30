#include <bits/stdc++.h>
using namespace std;
       int minPartitions(string n) {
        int maxi = 0;
        for(int i=0;i<n.length();i++){
             if((n[i]-'0')>maxi){
                maxi = n[i]-'0';
             }
        }
        return maxi;
    } 
   int main(){
     string n = "3721";
     int ans = minPartitions(n);
     cout<<ans<<endl;
    return 0;
   }
