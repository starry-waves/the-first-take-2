#include <iostream>
#include <ctime>
#include <iomanip>
//set precision after floating point numbers

using namespace std;
using text = std::string;

class Shape{
  public:
  double area;
  double volume;
};
class Cube : public Shape{
  public:
  double side;
  Cube(double side){
    this -> side = side;
    this -> area = side * side;
    this -> volume = pow(side , 3);
  }
}; 
class Sphere : public Shape{
  public:
  double radius;
  Sphere(double radius){
    this -> radius = radius;
    this -> area = 4.0 * 3.14159 * pow(radius , 2);
    this -> volume = (double)4/3 * 3.14159 * pow(radius , 3);
  }
};


int main(){

  Cube cube1 (10);

    cout << "cube info: \n";

  cout << cube1.area << '\n';
  cout << cube1.volume << '\n' << '\n';

  cout << "sphere info: \n";

  Sphere sphere1 (5);
  cout << sphere1.area << '\n';
  cout << sphere1.volume << '\n';

   
    return 0;
}









