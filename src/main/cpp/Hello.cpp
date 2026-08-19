#include <iostream>
#include <ctime>
#include <iomanip>
//set precision after floating point numbers

using text = std::string;


int main(){

    //first 3 is row, second 3 is column
    text cars[3][3] = {{"mustang" , "escape", "F-150"},
                      {"corvette", "equinox", "siverado"},
                      {"challenger", "durango", "ram 150"}};

   int rows = sizeof(cars)/sizeof(cars[0]);
   int columns = sizeof(cars[0])/sizeof(cars[0][0]);

   for(int i = 0; i < rows; i++){
        for(int j = 0; j < columns; j++){
            std::cout << cars[i][j] << " ";
        }
        std::cout << '\n';
   }

    return 0;
}




