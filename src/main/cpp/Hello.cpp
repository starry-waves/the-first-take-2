#include <iostream>
#include <ctime>
#include <iomanip>
//set precision after floating point numbers

using namespace std;
using text = std::string;



int main(){
 
    int *pointer = nullptr;
    int x = 123;

    pointer = &x;

    if(pointer = nullptr){
        std::cout << "uh oh!";
    }  else{
        cout << "address was assigned";
        }
        //this is used to check to make sure that the pointe is not a nullptr to avoid undefined behvavior 



    return 0;
}








