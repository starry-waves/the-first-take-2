#include <iostream>
#include <ctime>
#include <iomanip>
//set precision after floating point numbers

using text = std::string;

int searchArray(text array[], int size, text element);

int main(){

    text foods[] = {"pizza", "hamburger", "hotdog"};
    int size = sizeof(foods)/ sizeof(foods[0]);
    int index;
    text myFood;

    std::cout << "enter element to search for: " << '\n';
    std::getline(std::cin, myFood);

    index = searchArray(foods, size, myFood);
     if(index != -1){
        std::cout << myFood << " is at index: " << index;
     } else{
        std::cout << myFood << " is not in the array"; 
     }




    return 0;
}

int searchArray(text array[], int size, text element){
    for(int i = 0; i < size; i++){
        if(array[i] == element){
            return i;
        }
    }
    return -1;
}


