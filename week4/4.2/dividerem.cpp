#include <iostream>

void divand(int s1, int s2, int& quot, int& rem){
    quot = s1 / s2;
    rem = s1 % s2;
}

int main () {
    int n1 = 11, n2 = 3, c, d;
    divand (n1, n2, c, d);
    std::cout << ((c == 3) && (d == 2)) << std::endl;

}