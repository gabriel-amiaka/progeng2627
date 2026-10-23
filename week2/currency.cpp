#include <iostream>
int main(){
    double a, b, area;
std::cout << "How much money in british pounds" << std::endl;
std::cin >> a;
std::cout << "what is the exchange rate of british pounds to Euros" << std::endl;
std::cin >> b;
area = a * b;
std::cout << "The amount of money in Euros is " << area << std::endl;
}
