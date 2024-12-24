#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    int n;
    cin>>n;
    cin>>s;
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    set<char> uniqueChars;
    for (char c : s) {
        uniqueChars.insert(c);
    }
    if(uniqueChars.size()==26){
        cout<<"YES\n";
    }
    else{
        cout<<"NO\n";
    }
    return 0;
}
