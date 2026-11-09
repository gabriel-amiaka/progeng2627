#include <iostream>
#include <string>

void myswap(int& a, int& b){

    string tmp;
    tmp = a;
    a = b;
    b = tmp;

}

int main(){
    string n1, n2;

    std::cout << "please enter two words" << std::endl;
    std::cin >> n1 >> n2;

    std::cout << "you entered:" << std::endl;
    std::cout << "n1: " << n1 << std::endl;
    std::cout << "n2: " << n2 << std::endl;

    myswap(n1, n2);
    
    std::cout << "after swapping the words:" << std::endl;
    std::cout << "n1: " << n1 << std::endl;
    std::cout << "n2: " << n2 << std::endl;
}