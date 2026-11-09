#include <iostream>
int smallest_factor(int n){
        for(int cf=2; cf<n; cf++){

            if( (n % cf) == 0){

            return 0; 
        }
    
    
     }
   
        return n;
}
    
int main(){
int a, b;
std::cin >> a >> b;
for (int i = a; i <= b; i++){
    if(smallest_factor(i)) {
std::cout << smallest_factor(i) << std::endl;

    }
}
}
