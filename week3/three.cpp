#include <iostream>
int main(){
    int n, m;
    std::cout << "Enter a number" << std::endl;
    std::cin >> n;
    m = n % 3;
    if (m == 0){
    std::cout << "This number is a multiple of three" << std::endl;}
    else { std::cout << "This number is not a multiple of three" << std::endl;}
}