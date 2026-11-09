#include <iostream>

// this is the only different line:
void myswap(int& n1, int& n2){

    int tmp;
    tmp = n1;
    n1 = n2;
    n2 = tmp;

}
void sort_two_numbers(int& s1, int& s2){ 
    if (s1 > s2){
        myswap(s1, s2);
    }
}

void sort_three_numbers(int& s1, int& s2, int& s3){ 
    if (s3 < s1){
        myswap(s1, s3);
    }
    if (s2 < s1){
        myswap(s1, s2);
    }
    if (s3 < s2){
        myswap(s2, s3);
    }
}

int main(){
    int n1 = 2;
    int n2 = 1;

    int exn1 = 1;
    int exn2 = 2;

    sort_two_numbers(n1, n2);
    std::cout << ((n1 == exn1) && (n2 == exn2)) << std::endl;

    n1 = 1;
    n2 = 2;

    exn1 = 1;
    exn2 = 2;

    sort_two_numbers(n1, n2);
    std::cout << ((n1 == exn1) && (n2 == exn2)) << std::endl;


    int n3, exn3;

    n1 = 1;
    n2 = 3;
    n3 = 2;

    exn1 = 1;
    exn2 = 2;
    exn3 = 3;

    sort_three_numbers(n1, n2, n3);
    std::cout << ((n1 == exn1) && (n2 == exn2) && n3 == exn3) << std::endl;
}

/*
int main(){
    int n1, n2, n3;

    std::cout << "please enter three values" << std::endl;
    std::cin >> n1 >> n2 >> n3;

    std::cout << "you entered:" << std::endl;
    std::cout << "n1: " << n1 << std::endl;
    std::cout << "n2: " << n2 << std::endl;
    std::cout << "n3: " << n3 << std::endl;
    sort_two_numbers(n1, n3);
    sort_two_numbers(n1, n2);
    sort_two_numbers(n2, n3);


    std::cout << "after sorting the values:" << std::endl;
    std::cout << "n1: " << n1 << std::endl;
    std::cout << "n2: " << n2 << std::endl;
    std::cout << "n3: " << n3 << std::endl;
}
    */