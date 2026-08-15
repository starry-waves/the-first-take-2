#include <iostream>


using text_t = std::string;

int main(){

    text_t name;

    

    while(name.empty()){
        std::cout << "type ur name!!!";
        std::getline(std::cin , name);
    }

    std::cout << "hello " << name;

  

    return 0;
}

