#include <iostream>

int main(){
    int a, b, counter=0;
    std::cin >> a >> b;
while(a>=b){
    a = a - b;
    counter = counter + 1;
    }
    std::cout << counter << " " << a << std::endl;
}
