/*#include <iostream>
#include <vector>

int main(){
int n, a, s;
std::cin >> n;
std::vector<int> v;
    for (int i=0; i<n; i++){
    std::cin >> a;
    v.push_back(a);
    }

    std::cin >> s;

    int count=0;

    std::vector<int> ind;

    for (int i=0; i<n; i++){
        if (v[i]==s){
            count++;
           ind.push_back(i); 
        }
        
    }
    std::cout << "Sum of occcurences of that number " << count << std::endl;
    std::cout << "At indicies " << std::endl;
    for (int i=0; i<ind.size(); i++){
        std::cout << ind[i] << std::endl;
    }
    
}*/
#include <iostream>

int main(){
    for(int i = 0; i < 7; i++){
        std::cout << i << std::endl;
    }
}