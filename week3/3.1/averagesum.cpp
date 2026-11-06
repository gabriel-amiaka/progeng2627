#include <iostream>

int main(){
    int counter=1, n;
    double acc, avg;
    

    while(n != 0){ // != means different or not equal
std::cout << "enter a number:" << std::endl;
        std::cin >> n;
acc = n + acc;
avg = acc / counter;
counter = counter + 1;
        std::cout << "the average so far is:" << std::endl;
        std::cout << avg << std::endl;
    }
}
//Write a program that keeps reading integers from the users (stopping when the user enters 0) and after each number read prints what's the average of the numbers at that point. Note that the numbers in input are integers but the average will not always be an integer. For example://