#include <iostream>
#include <ctime>
#include <iomanip>
//set precision after floating point numbers

using namespace std;
using text = std::string;

  struct student {
    text name; 
    double gpa;
    bool enrolled = true;
  };
  //acts as a data type

int main(){

  student student1;
  student1.name = " el spongebob";
  student1.gpa = 3.2;


  cout << student1.name <<'\n';
  cout << student1.gpa << '\n';
  cout << student1.enrolled << '\n';
  // prints 1 bc 1 = true in binary (switch is on)

  student student2;
  student2.name = " el patrick";
  student2.gpa = 1.9;


  cout << student2.name <<'\n';
  cout << student2.gpa << '\n';
  cout << student2.enrolled << '\n';

  student student3;
  student1.name = " el squidward";
  student1.gpa = 4.0;


  cout << student3.name <<'\n';
  cout << student3.gpa << '\n';
  cout << student3.enrolled << '\n';

   

    return 0;
}









