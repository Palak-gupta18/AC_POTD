  #include <iostream>
  using namespace std;
   int gcd(int a, int b) {
        if(a==b){
            return a;
        }
        if(a<b){
           return gcd(a, b-a);
        }
        else{
           return gcd(a-b,b);
        }
    }
    int main() {
    int num1 = 16, num2 = 12;
    cout << "GCD of " << num1 << " and " << num2 << " is: " << gcd(num1, num2) << std::endl;
    return 0;
}
