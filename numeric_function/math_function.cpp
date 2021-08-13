#include <iostream>
#include <cmath>

int main(){

    std::cout << sqrt(25) << std::endl;
    std::cout << NAN << std::endl;
    std::cout << remainder(10,3) << std::endl;
    std::cout << 10 % 3 << std::endl;
    std::cout << remainder(10,3.25) << std::endl;
    std::cout << fmax(10,3.25) << std::endl;
    std::cout << ceil (fmin(10,3.25)) << std::endl; // go up
    std::cout << floor (fmin(10,3.25)) << std::endl; // go down
    std::cout << trunc (-1.25) << std::endl; // crop
    std::cout << floor(fmin(10, -3.25)) <<std::endl; // vs. trunc different for neg. values
    std::cout << trunc(fmin(10, -3.25)) <<std::endl;
    std::cout << round(-1.49) << std::endl; // whatever closest `nearby`
    std::cout << nearbyint(3.25) <<std::endl;

    return 0;
}
