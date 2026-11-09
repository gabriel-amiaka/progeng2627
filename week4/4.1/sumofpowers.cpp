#include <iostream>
#include <cmath>
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