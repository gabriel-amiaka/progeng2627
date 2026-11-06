#include <iostream>
int main(){
    double a, b, area, perimeter;
std::cout << "what is the width of the rectangle" << std::endl;
std::cin >> a;
std::cout << "what is the length of the rectangle" << std::endl;
std::cin >> b;
area = a * b;
perimeter = 2*a + 2*b;
std::cout << "The area of the rectangle is " << area << ", the perimeter of the rectangle is " << perimeter << "." << std::endl;
}
