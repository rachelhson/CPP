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
    std::vector <std::pair<double,double>> waypoints = {{12,10}, {11,34}}; 
    
    std::cout << "waypoint: ";
    printVectorElements(waypoints);
    int i = 0;
    for(int i=0; i < waypoints.size(); ++i){
        double x = waypoints[i].first;  
        double y = waypoints[i].second;
 }  
    return 0;

}


