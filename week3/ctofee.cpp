#include <iostream>
#include <string>

int main(){
    double length_in, length_out;
    std::string unit_in, unit_out;
    const double mile_to_km = 9/5;

std::cin >> length_in >> unit_in;

bool unit_input = true;
if (unit_in == "C"){
    length_out = (length_in * mile_to_km) + 32;
    unit_out = "F";
}
else if (unit_in == "F") {
    length_out = (length_in - 32) / mile_to_km;
    unit_out = "C";
}
else { unit_input = false;
}
if (unit_input = true){
     std::cout << length_out << unit_out <<std::endl;
}
else {
    std::cout << "Unit not recognised" << std::endl;
}

}