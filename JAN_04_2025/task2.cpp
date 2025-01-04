#include <bits/stdc++.h>
using namespace std;
       bool winnerOfGame(string colors) {
        int n = colors.length();
        if(n<=2){
            return false;
        }
        int alice = 0;
        int bob = 0;
        for(int i=1;i<n-1; i++){
            if(colors[i]=='A' && colors[i]==colors[i-1]&& colors[i]==colors[i+1]){
                alice++;
            }
        }
        for(int i=1;i<n-1; i++){
            if(colors[i]=='B' && colors[i]==colors[i-1]&& colors[i]==colors[i+1]){
                bob++;
            }
        }
        if(alice>bob){
            return true;
        }
        return false;
    }
    int main(){
        string colors = "AAABABB";
       if(winnerOfGame(colors)){
           cout<<"TRUE"<<endl;
       }
       else{
           cout<<"FALSE"<<endl;
       }
       return 0;
    }
