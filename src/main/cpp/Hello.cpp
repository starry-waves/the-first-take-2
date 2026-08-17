#include <iostream>
#include <ctime>
#include <iomanip>
//set precision after floating point numbers

using text = std::string;

void sort (int array[], int size);
int main(){
  text foods[10] = {"pizza" , "pizza" , "pizza" , "pizza" , "pizza" , "pizza" ,"pizza" , "pizza" , "pizza" , "pizza" ,};

    for (text food : foods){
        std::cout << food << '\n';
    }

    //use fill() for efficiency
    const int SIZE = 100;
    text lunch[100];
    fill(foods, foods + SIZE, "pizza");
    for (text lunc : lunch){
        std::cout << lunc << '\n';
    }

    return 0;
}




