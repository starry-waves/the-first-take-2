#include <iostream>
#include <ctime>


using text_t = std::string;

void bakepizza();
void bakepizza(text_t topping1, text_t topping2);
int main(){
    text_t topping1;
    text_t topping2;

    std::cout << "lets bake a pizza!!! please type in a topping: ";
    std::cin >> topping1;
    std::cout << "\nok great! type in another one: ";
    std::cin >> topping2;
    bakepizza(topping1, topping2);
    
}

void bakepizza(){
    std::cout << "heres ur pizza!\n";
}
void bakepizza(text_t topping1, text_t topping2){
    std::cout <<"\nheres ur " << topping1 << " and " << topping2 << " pizza! enjoy!";
}



