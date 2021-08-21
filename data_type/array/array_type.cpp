#include<iostream>


int main() {

    int guesses[] = {10, 13, 54, 42, 12, 12, 13};
    std::cout << *guesses;
    int size = sizeof(guesses) / sizeof(guesses[0]); // sizeof - bit size
    std::cout <<sizeof(guesses[0]) <<std::endl;   
    std::cout <<size <<std::endl; 

    for (int i = 0; i <size; i++){
        std::cout<<guesses[i]<<std::endl;
    }


    std::cout << guesses[3] <<std::endl;
    guesses[3] = 300;
    std::cout << guesses[3] <<std::endl;
    return 0;
}