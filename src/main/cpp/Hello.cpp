#include <iostream>
#include <ctime>
#include <iomanip>
//set precision after floating point numbers

using namespace std;
using text = std::string;

struct car{
  text model;
  int year;
  text color;
};
void printcar(car &car);

void paintcar(car car, text color);

int main(){

  car car1;
  car car2;

  car1.model = "mustang";
  car1.year = 2023;
  car1.color = "red";

  car2.model = "corvette";
  car2.year = 2024;
  car2.color = "blue";

    paintcar(car1, "silver");
    //only changes a copy of car1, not the awactual color value stored
    printcar(car1);
    printcar(car2);

   
    return 0;
}

void printcar(car &car){
  cout << car.model << '\n';
  cout << car.year << '\n';
  cout << car.color << '\n';
}

void paintcar(car car, text color){
  car.color = color;
}









