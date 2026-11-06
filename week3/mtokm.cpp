#include <iostream>
#include <string>

int main(){
    double length_in, length_out;
    std::string unit_in, unit_out;
    const double mile_to_km = 1.609;

std::cin >> length_in >> unit_in;
if (unit_in == "mile"){
    length_out = length_in * mile_to_km;
    std::cout << length_out << "km" << std::endl;
}
else {
    length_out = length_in / mile_to_km;
    std::cout << length_out << "mile" <<std::endl;
}

}