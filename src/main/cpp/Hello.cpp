#include <iostream>
#include <ctime>
#include <iomanip>
//set precision after floating point numbers

using namespace std;
using text = std::string;

int factorial(int num);
int main(){

  
    cout << factorial(10);

    return 0;
}

int factorial(int num){
    int result = 1;
   if (num > 1){
    return num * factorial (num - 1);
   }
   else{
    return 1;
   }
   
    
}






