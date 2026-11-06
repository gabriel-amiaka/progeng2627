#include <iostream>
int main (){
    int n, acc=1;
    double x;
     std::cin >> x >> n;
    for (int i=0; i<n; i++){
        acc = acc * x;
    }
    std::cout << acc << std::endl;
}