#include <iostream>
#include <vector>

void filter(const std::vector<int>& vin,int t, std::vector<int>& vout){ 

    for (int i=0; i < vin.size(); i++){
        if(vin[i]<t){
            vout.push_back(vin[i]);
    }
}
}

int main(){

std::vector<int> v = {3, 2, 1, 8, 7, 7, 9}, w;
int t=5;
filter(v, t, w);

for (int i=0; i<w.size(); i++){
std::cout << w[i] << std::endl;
}

}