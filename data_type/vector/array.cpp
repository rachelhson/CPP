#include <iostream>
#include <vector>

template<typename T>
void printVectorElements(std::vector<T> &vec)
{
    for (auto i = 0; i < vec.size(); ++i) {
        std::cout << "(" << vec.at(i).first << ","
            << vec.at(i).second << ")" << "; ";
    }
    std::cout << std::endl;
}


int main() {
    std::cout << "hello world";

    std::vector <std::pair<double,double>> waypoints = {{12,10}, {12,34}}; 
    
    std::cout << "waypoint: ";
    printVectorElements(waypoints);

    return 0;

}
