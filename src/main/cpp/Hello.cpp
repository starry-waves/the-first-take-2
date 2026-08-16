#include <iostream>
#include <ctime>


using text_t = std::string;

int main(){

    srand(time(NULL));

    int num = (rand() % 5) + 1;

    switch(num){
        case 1:
        std::cout << "u win a good job pencil\n";
        break;

        case 2:
        std::cout << "u win a cool bracelet\n";
        break;

        case 3:
        std::cout << "u win a free lunch\n";
        break;

        case 4: 
        std::cout << "u win a gift card\n";
        break;

        case 5:
        std::cout << "u win concert tickets\n";
        break;

    }

    std::cout << "num";

    return 0;
}

