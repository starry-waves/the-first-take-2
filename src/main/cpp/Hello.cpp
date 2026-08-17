#include <iostream>
#include <ctime>
#include <iomanip>
//set precision after floating point numbers

using text = std::string;


int main(){

   text students [] = {"sponegob", "patrick", "squidward", "sandy"};

   for(int i = 0; i < (sizeof(students)/sizeof(students[0])); i++){
        std::cout << students[i] << '\n';
   }

   return 0;
}
