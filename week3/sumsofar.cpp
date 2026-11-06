/*
The sum so far¶
Write a program that keeps reading integers from the users (stopping when the user enters 0) and after each number read prints what's the sum of the numbers at that point. For example:


enter a number:
3
the sum so far is:
3
enter a number:
5
the sum so far is:
8
enter a number:
-1
the sum so far is:
7
enter a number: 2
the sum so far is:
9
enter a number: 0
*/


#include <iostream>

int main(){
    double n = 1, acc;
    

    while(acc != 0){ // != means different or not equal
std::cout << "enter a number:" << std::endl;
        std::cin >> n;
acc = n + acc;
        std::cout << "the sum so far is:" << std::endl;
        std::cout << acc << std::endl;
    }
}