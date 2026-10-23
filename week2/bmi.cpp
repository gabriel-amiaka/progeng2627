#include <iostream>
int main(){
    double a, b, w, h;
std::cout << "what is your weight in kg" << std::endl;
std::cin >> w;
std::cout << "what is your height in metres" << std::endl;
std::cin >> h;
a = h * h;
b = w / a;
std::cout << "Your BMI is " << b << std::endl;
}
