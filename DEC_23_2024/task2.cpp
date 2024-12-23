#include <iostream>
using namespace std;
    int minimumMoves(string s) {
        int count = 0;
        int i=0;
        while(i<s.length()){
            if(s[i]=='X'){
                count++;
                i+=3;
            }
            else{
                i++;
            }
        }
        return count;
    }
int main(){
    string s = "XXXO";
    int result = minimumMoves(s);
    cout<<result<<endl;
}
