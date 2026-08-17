#include <iostream>
#include <ctime>
#include <iomanip>
//set precision after floating point numbers

using text = std::string;


int main(){

    double gpa = 2.5;
    std::cout << sizeof(gpa) << " bytes\n";
    //prints 8 bytes
     std::cout << sizeof(double) << " bytes\n";
     //also prints 8 bytes

    text name = "juniper";
    std::cout << sizeof(name) << " bytes\n";
    //prints 24 bytes
    std::cout << sizeof(text) << " bytes\n";
    //also prints 24 bytes

    bool yes = true;
    std::cout << sizeof(yes) << " byte\n";
    //prints 1 byte
    std::cout << sizeof(bool) << " byte\n";
    //also prints 1 byte

    char grades[] = {'a' , 'b' , 'c' , 'd' , 'f'};
    std::cout << sizeof(grades) << " bytes \n";
    std::cout << sizeof(char) << " byte\n";
    //find the amount of elements in an array by dividing size of array by size of one element or its data type

    std::cout << sizeof(grades)/sizeof(grades[0]) << " elements\n"; //or sizeof(data type)
    text students[] = {"sponegbob", "sandy", "squidward", "patrick"};
    std::cout << sizeof(students)/sizeof(students[0]) << " students\n";


    
}
