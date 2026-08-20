#include <iostream>
#include <ctime>
#include <iomanip>
//set precision after floating point numbers

using namespace std;
using text = std::string;



int main(){
 
    text name = "juniper";
    text *pName = &name;

    int age = 21;
    int *pAge = &age;

    text pizzas[5] = {"pizza1" , "pizza2" , "pizza3" , "pizza4" , "pizza5"};

    text *pPizzas = pizzas; 
    //array is already as memory address

    cout << pName << '\n';
    //print memory address
    cout << *pName << '\n';
    //print value @ memory address
    cout << pAge << '\n';
    cout << *pAge << '\n';

    cout << pPizzas << '\n';
    cout << *pPizzas << '\n';


    return 0;
}








