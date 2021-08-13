#include <iostream>
#include <string>

int main(){
    
    std::string greeting = "hello";
    std::cout << greeting + "hhhh" <<std::endl;
    std::cout << greeting.length() <<std::endl; // number of characters
    
    greeting += "!"; // append

    std::cout << greeting <<std::endl;
    //method == member function == functions attached to objects
    char name[] = "Rachel"; //c string == array of characters 

    greeting = "whatever";

    std::cout << greeting  <<std::endl;

    std::cin  >> greeting; // only grab first character
    std::cout << greeting<<std::endl;
}