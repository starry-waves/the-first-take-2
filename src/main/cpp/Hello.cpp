#include <iostream>
#include <ctime>


using text_t = std::string;

int main(){

    int num;
    int guess;
    int tries = 0;

    srand(time(NULL));
    num = (rand () % 100) + 1;

    std::cout << "~~~ number guessing game ~~~\n";

    do{
        std::cout << "enter a guess between 1 - 100: \n";
        std::cin >> guess;
        tries++;

        if(guess > num){
            std::cout << "too high!\n";
        } else if (guess < num){
            std::cout << "too low!\n";
        } else{
            std::cout << "correct!!\n number of tries: " << tries << '\n';
        } 
    }while (guess != num);

    std::cout << "thanks for playing!\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~";


    return 0;
}

