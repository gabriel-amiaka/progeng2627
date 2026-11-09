#include <iostream>
#include <vector>

void append(const std::vector<int>& vin1, const std::vector<int>& vin2, std::vector<int>& vout){ 

    vout = vin1;
    for (int i=0; i < vin2.size(); i++){
        vout.push_back(vin2[i]);
    }
}

int main(){

std::vector<int> v = {3, 2, 1};
std::vector<int> w = {6, 5, 4},  x;
append(v, w, x);

for (int i=0; i<x.size(); i++){
std::cout << x[i] << std::endl;
}

}