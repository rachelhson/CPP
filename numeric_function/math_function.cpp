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
    std::cout << round(-1.49) << std::endl; // whatever closest `nearby`

    return 0;
}
