#include <iostream>
#include <ctime>
#include <iomanip>
//set precision after floating point numbers
using namespace std;
using text = std::string;

void printinfo(const text &name, const int &age);
int main(){

    text name = "juniper";
    int age = 21;
    printinfo(name , age);


    return 0;
}

void printinfo(const text &name, const int &age){
    cout << name << '\n';
    cout << age << '\n';
} //conveys intent that the og variables should not be changed.
    //const matters more when u pass by reference, since we are dealing with og value
        //(pass by reference deals with copy, so const matters less)






