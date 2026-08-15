#include <iostream>

using text_t = std::string;

int main(){

    double x = 3;
    double y = 4;
    double z = 5;
    
    z = std::max(x , y);
    // z = the greater number
    z = std::min(x , y);
    // z = the lesser number
    z = pow(x , y);
    // z = x^y
    z = sqrt(y);
    // z = square root of y
    z = abs(-3);
    // z = |-3|
    z = round(x);
    // z = x (rounded)
    z = ceil(x);
    // z = x (rounded up)
    z = floor(x);
    // z = x (rounded down)


    return 0;
}

