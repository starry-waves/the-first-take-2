#include <iostream>
#include <ctime>
#include <iomanip>
//set precision after floating point numbers

using namespace std;
using text = std::string;

class Pizza{
    public:
      text topping1;
      text topping2;

      Pizza (){
        topping1 = "cheese";
      }

      Pizza(text topping1){
       this-> topping1 = topping1;
      } 
      Pizza(text topping1, text topping2){
        this -> topping1 = topping1;
       this-> topping2 = topping2;
      }
};


int main(){
 Pizza pizza1("pepperoni");
 Pizza pizza2("pepperoni" , "mushroom");
 Pizza pizza3;

 cout << pizza2.topping1 << '\n' << pizza2.topping2 << '\n';
 cout << pizza3.topping1;


  
  
   
    return 0;
}









