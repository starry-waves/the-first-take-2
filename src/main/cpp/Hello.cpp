#include <iostream>

//una calculadora

using text_t = std::string;

int main(){

    char op;
    double num1;
    double num2;
    double result;

    std::cout << "~~~~~~~~~~~~~~ calculator ~~~~~~~~~~~~~~\n\n\n";
   
    std::cout << "\n\nenter the first number: ";
    std::cin >> num1;
     std::cout << "enter + , - , /, *, or ^ ";
    std::cin >> op;
    std::cout << "\n\ngreat! now enter the second number: ";
    std::cin >> num2;

    switch(op){
        case '+':
        result = num1 + num2;
        break;

        case '-':
        result = num1 - num2;
        break;

        case '*':
        result = num1 * num2;
        break;

        case '/':
        result = num1 / num2;
        break;

        case '^':
        result = pow(num1, num2);
        break;

        default:
        std::cout << "i dont have the skill to code that, use desmos";
        break;
    }

    std::cout << "\n\nthe result is: " << result << " !";

    return 0;
}

