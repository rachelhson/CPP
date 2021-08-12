#include <iostream>


int main(){
    int age = 15; 
    if(age < 13)
    {
        std::cout << "you\n";
        return -1;
    }
    else if(age <20){
        std::cout << "me\n";
    }
    else {
        std::cout << age;
    }

    std::cout << "out of loop";

    return 0;

}