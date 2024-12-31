#include <bits/stdc++.h>
using namespace std;
    string longestCommonPrefix(vector<string>& strs) {
        int l = strs.size();
        if(l==0){
            return "";
        }
        string ans = strs[0];
        for(int i=1; i<l;  i++){
                while(strs[i].find(ans)!=0){  
                    ans = ans.substr(0,ans.length()-1);  
                }
        }
        return ans;
    }

int main(){
    vector<string>strs;
    strs = {"flower", "flow","flight"};
    string res = longestCommonPrefix(strs);
    cout<<res<<endl;
}
