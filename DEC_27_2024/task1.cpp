#include <bits/stdc++.h>
using namespace std;
bool isHappy(int n) {
     unordered_set<int>s;
        while (n != 1 && s.find(n) == s.end()){
            s.insert(n);
            int num = 0;
            while(n!=0){
            int digit = n%10;
            num = num + digit*digit;
            n/=10;
            }
            n = num;
        }
        if(n==1){
            return true;
        }
        return false;
    }
int main(){
    int n = 19;
    if(isHappy(n)){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}
