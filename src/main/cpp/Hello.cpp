#include <iostream>

//making a hypotenuse calc!!
//hypotenuse is a^2 + b^2 = c^2, or c = sqrt (a^2 + b^2)

using text_t = std::string;

int main(){

    double a;
    double b;
    double c;
    std::cout<< "hypotenuse calculator!\nPlease type in value of a: ";
    std::cin >> a;

    std::cout << "\ngreat! now type in value of b: ";
    std::cin >> b;

    c = sqrt(pow(a , 2) + pow(b , 2));

    std::cout << "the value of c is :" << c << " !";

    return 0;
}

