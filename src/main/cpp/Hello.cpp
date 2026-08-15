#include <iostream>

//temp conversion program!

using text_t = std::string;

int main(){

    double temp;
    char unit;

    std::cout << " ~~~ temp conversion ~~~";
    std::cout << "\nf = farenheit, c = celcius\nwhat unit would u like to convert to? ";
    std::cin >> unit;

    if (unit == 'f' || unit == 'F'){
        std::cout << "enter temp in c: ";
        std::cin >> temp;

        temp = (1.8 * temp) + 32.0;
        std::cout << "temp is: " << temp << " f\n";
    } 
    else if (unit == 'c' || unit == 'C' ){
        std::cout << "enter temp in f: ";
        std::cin >> temp;
        temp = (temp - 32.0)/ 1.8;
        std::cout << "temp is: " << temp << " c\n";
    } 
    else{
        std::cout << "(in a french accent) that is not possible";
    }
   
   
    
    return 0;
}

