#include <iostream>

//if statements!
//create a program that checks the user's age. if they are under 18, they cannot use the site. else, they are good to go


using text_t = std::string;

int main(){

    int age;
    std::cout << "enter age: ";
    std::cin >> age;
    
    if(age >= 18){
        std::cout << "welcome!";
    }else if(age <= 0){
        std::cout << "i have a better question";
    }else{
        std::cout << "gtfo loser";
    }

    return 0;
}

