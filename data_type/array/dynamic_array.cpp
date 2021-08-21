#include <iostream>
#include <vector>

int main() {
    // 1. initialize
    std::vector<int> v0;
    std::vector<int> v1(7,0); // 7 of value 0
    std::cout << v1.size() << std::endl;

    //2. make a copy 
    std::vector<int> v2(v1.begin(), v1.end());
    std::vector<int> v3(v2);

    //3. cast an array to a vector 
    int a[5] = {0,1,2,3,4};
    std::vector<int> v4(a, *(&a+1));
    std::cout << sizeof(a)/sizeof(a[0]);
    std::cout << a[2];

    
    //for (int i = 0; i < sizeof(a); i++){
    //    std::cout <<a[i]<<std::endl;
    //}

    //for(int i = 0; i <v4.size(); i++){
    //    std::cout <<" "<< v1[i];
    //}
}