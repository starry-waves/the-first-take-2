#include <iostream>
#include <ctime>
#include <iomanip>
//set precision after floating point numbers

using text = std::string;


int main(){

        text foods[5];
        int size = sizeof(foods)/sizeof(foods[0]);
        text temp;

        for(int i = 0; i < size; i++){
            std::cout << "enter a food u like or q to quit: \n #" << i + 1 << ") ";
            std::getline(std::cin, temp);
            if(temp == "q" || temp == "Q"){
                break;
            } else{
                foods[i] = temp;
            }
        }

        std::cout << "\nu like the following foods:\n ";
        for (int i = 0; !foods[i].empty(); i++){
            std::cout << foods[i] << '\n';
        }

    return 0;
}




