#include <bits/stdc++.h>
using namespace std;
    string reverseWords(string s) {
        int start = 0;
        int end = s.length()-1;
        string ans = "";
        string temp = "";
        while(start<=end){
           char ch = s[start];
           if(ch!=' '){
               temp+=ch;
           }
           else if(!temp.empty()){
               if(!ans.empty()){
                ans = temp+" "+ans;
               }
               else{
                ans = temp;
               }
               temp="";
           }
           start++;
        }
        if (!temp.empty()) {
            if (!ans.empty()) {
                ans = temp+ " "+ans;
            } else {
                ans = temp;
            }
        }
        return ans;
    }

int main(){
    string s = "the sky is blue";
    string res = reverseWords(s);
    cout<<res<<endl;
}
