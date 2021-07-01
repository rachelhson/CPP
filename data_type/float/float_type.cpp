#include <iostream>
#include <float.h>

int main()
{
    float a = 10.0 / 3;
    double b = 77000; // 7.7E4 
    long double c;

    std::cout << a; 
    std::cout << std::fixed << a << std::endl;
    std::cout << FLT_DIG << std::endl; // float less trust worthy | less memory 
    std::cout << LDBL_DIG << std::endl; // double trust worthy | high memory
    // 7.7 *10000  = 77000    

}