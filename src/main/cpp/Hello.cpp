#include <iostream>
#include <ctime>
#include <iomanip>
//set precision after floating point numbers

using text = std::string;


int main(){

   text students[] = {"sponegob", "patrick", "squidward", "sandy"};

   for(text student : students){
        std::cout << student << '\n';
   }
   
   int grades[] = {65, 93, 72, 81};
   for(int grade : grades){
        std::cout << grade << '\n';
   };

}
