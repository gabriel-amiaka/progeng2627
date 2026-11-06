#include <iostream>
#include <string>

int main(){
    double length_in, length_out;
    std::string unit_in, unit_out;
    const double mile_to_km = 9/5;

std::cin >> length_in >> unit_in;
if (unit_in == "C"){
    length_out = (length_in * mile_to_km) + 32;
    std::cout << length_out << "F" << std::endl;
}
else {
    length_out = (length_in - 32) / mile_to_km;
    std::cout << length_out << "C" <<std::endl;
}

}