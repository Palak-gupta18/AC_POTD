#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int scoreOfString(string s) {
     int sum = 0;
     int n = s.length();
      for(int i=0; i<n-1;i++){
           sum = sum+((s[i]>s[i+1]) ? (s[i]-s[i+1]) : (s[i+1]-s[i]));
        }
       return sum;
    }
int main() {
    string s;
    cout << "Enter a string: ";
    cin >> s;
    int res = scoreOfString(s);
    cout << "Score of the string: " << res << endl;
    return 0;
}
