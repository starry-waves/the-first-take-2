#include <iostream>
#include <ctime>


using text_t = std::string;

void happyBirthday(text_t name, int age);
//its common practice to declare a function first, then define it later

int main(){
    text_t name;
    int age;
    std::cout << "hello! what is ur name? ";
    std::getline(std::cin >> std::ws , name);

    std::cout << "how old are u? ";
    std::cin >> age;
    happyBirthday(name, age);


    return 0;
}
void happyBirthday(text_t name, int age){
    std::cout << "happy birthday to u!\nhappy birthday to u!\nhappy birthday dear " << name << "\nhappy birthday to u!\nyou are: " << age << " years old!";
} //create a function to sing happy birthday

