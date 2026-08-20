#include <iostream>
#include <ctime>
#include <iomanip>
//set precision after floating point numbers
using namespace std;
using text = std::string;

void swap(text &x, text&y);
int main(){

    text x = "kool-aid";
    text y = "water";

   

    cout << "the function output: \n";
    swap(x , y);
    cout << "\nthe switch!!!\n\n";  
    cout << "x: " << x << '\n';
    cout << "y: " << y << '\n';

    return 0;
}

//make the swap into a function!

void swap(text &x, text &y){
    cout << "x: " << x << '\n';
    cout << "y: " << y << '\n';

    text temp;

    temp = x;
    //store koolaid in a temporary value
    x = y;
    //overwrite koolaid with water
    y = temp;
    //overwrite water with koolaid
    
}
//it doesn't work!
//pass by value: a copy of the og value is created, so only the copies are switched
//to fix: pass by reference (memory address)
//use & operator!





