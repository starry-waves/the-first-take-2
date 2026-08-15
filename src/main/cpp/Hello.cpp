#include <iostream>

using text_t = std::string;

int main(){

    text_t name;
    int age;

    std::cout << "what is your name? ";
    std::getline(std::cin >> std::ws, name);

    std::cout << "what is your age? ";
    std::cin >> age;

    std::cout << "your name is " << name << "\nyou are " << age << " years old";
    

    return 0;
}

