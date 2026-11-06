#include <iostream>
int main(){
int n, counter, m;
counter = 0;
std::cout << "Please enter a number" << std::endl;
std::cin >> n;
m = n;
while (n != 1){
    if (n % 2 == 0){
        n = n / 2;
    }
    else {
        n = 3 * n + 1;
    }
    std::cout << n << std::endl;
    counter = counter + 1;
    if (n > m){
    m = n;
}
    else {

    }
}
std::cout << "This took " << counter << " steps." << std::endl;
std::cout << "The max number was " << m << std::endl;
}