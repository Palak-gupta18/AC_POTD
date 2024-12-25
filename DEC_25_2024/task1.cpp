#include<bits/stdc++.h>
using namespace std;
int findContentChildren(vector<int>& g, vector<int>& s) {
    sort(g.begin(),g.end());
    sort(s.begin(),s.end());
    int i=0;
    int j=0;
    int ans=0;
    while(i<g.size() && j<s.size()){
        if(s[j]>=g[i]){
            ans++;
            i++;
            }
        j++;
      }
        return ans;
    }
int main(){
    vector<int>g,s;
    g = {1,2};
    s = {1,2,3};
    int result= findContentChildren(g,s);
    cout<<result<<endl;
    return 0;
}
