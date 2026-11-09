#include <iostream>
#include <cmath>
double mypow(double base, int exp){
 double result;
 result = 1;
 if (exp >= 0){
 for (int i = 0; i < exp; i++){
    result = result * base;
 }
}
 else {
 for (int i = 0; i > exp; i--){
    result = result / base;
 }
}

 return result;
 
double mypow(double base, int exp)
int main(){
int x, n;
std::cin >> x >> n;
int sum = 0;
for (int i = 1; i < n + 1; i++){
int term;
term = std::pow (x, i);
sum = sum + term;
}
std::cout << sum << std::endl;
}