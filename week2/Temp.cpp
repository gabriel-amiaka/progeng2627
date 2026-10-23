#include <iostream>
int main(){
    int a, f;
    std::cout << "What is the temperature in degrees Celcius?" << std::endl;
    std::cin >> a;
    f = (a * 9/5) + 32;
std::cout << "The termperature is " << f << " degrees Farenheit" << std::endl;
}