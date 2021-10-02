#include <iostream>
#include <array>

template<typename T, size_t S>


class Array 
{   public: 
    private: 
        T m_Data[S];
};

int main(){
  int size = 5; 
  Array<int, 10> data;
  
}