/*
Exercise: multiplication as repeated sum¶
Similar to the example above in which we compute x^n as x * x * x... done n times (with n being an integer >= 0), write a program that computes x * n as x + x + x... done n times.

*/

/*
#include <iostream>

int main(){
    // input the variables x and n
    double x;
    int n;

    std::cin >> x >> n;
    // 
}
*/


#include <iostream>

int main(){

    double x, acc = 0; // acc = 0;
    int n, counter = 0;

    std::cin >> x >> n;

    while(counter < n){

        acc = acc + x; // acc = acc + x;
        counter = counter + 1;
    }

    std::cout << x << "*" << n <<  " = " << acc << std::endl;

}
/*
x: ? 2
acc: 0 2 4 6
n: ? 3
counter: 0 1 2 3
*/



/*
#include <iostream>

int main(){

    double x, acc = 1; // acc = 0;
    int n, counter = 0;

    std::cin >> x >> n;

    while(counter < n){
        // x = x * x;
        acc = acc * x; // acc = acc + x;
        counter = counter + 1;
    }

    std::cout << x << "^" << n <<  " = " << acc << std::endl;

}

x: ?, 2
acc: 1, 2, 4, 8
n: ?, 3
counter: 0, 1, 2, 3



*/