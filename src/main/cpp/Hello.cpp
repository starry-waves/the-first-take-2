#include <iostream>
#include <ctime>


using text_t = std::string;

double square (double length);

int main(){
    double length;
    double area;
    std::cout << "area calculator/ practice with perfect squares!\nplease insert a length: ";
    std::cin >> length;
    
    area = square(length);

    std::cout << "the area is: " << area << " units squared!";


    return 0;
}
double square (double length){
    return length * length;
}


