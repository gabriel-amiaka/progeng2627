#include <iostream>
#include <vector>

int minindex(const std::vector<double>& vin){
    
    double min = vin[0];

    int n;
    for (int i=1; i < vin.size(); i++){
        if (vin[i] < min){
            min = vin[i];
            n = i;
        }
    }
    return n;
}

int main(){
    std::vector<double> v = {4, 5, -3}; //CHECk std::vector<double> v{3, 0.5, -1}
    std::cout << minindex(v) << std::endl;

    v = {3, 1, 2}; 
    std::cout << minindex(v) << std::endl;

}