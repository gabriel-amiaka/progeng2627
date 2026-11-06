//Write a program which "guesses" (better: finds out using an algorithm) what (integer) number the user is thinking, given a range (lower bound and higher bound) and, after each attempt, feedback from the user on whether the attempted value is less or greater than the actual number.
//
#include <iostream>
#include <string>
int main(){
 int n, a, b, g;
 std::string ans, ans2;
 std::cout << "input a higher bound" << std::endl;
 std::cin >> a;
 std::cout << "input a lower bound" << std::endl;
 std::cin >> b;
 g = (a + b) / 2;
 g = g % 2 + g;
 std::cout << "Is " << g << " your number?" << std::endl;
 std::cin >> ans;
 while ((ans == "no")){
    std::cout << "Is the number higher or lower?" << std::endl;
    std::cin >> ans2;
    if (ans2 == "higher"){
        b = g;
    }
   else {
        a = g;
 }
g = (a + b) / 2;
 g = g % 2 + g;
 std::cout << "Is " << g << " your number?" << std::endl;
 std::cin >> ans;
}
}