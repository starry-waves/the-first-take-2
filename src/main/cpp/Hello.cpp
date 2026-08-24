#include <iostream>
#include <ctime>
#include <iomanip>
//set precision after floating point numbers

using namespace std;
using text = std::string;

class Student{
    public:
      text name;
      int age;
      double gpa;

      Student(text name, int age, double gpa){
        this-> name = name;
        this-> age = age;
        this-> gpa = gpa;
      } //create constructor within the class
      //or
      // Student(text x, int y, double z){
      //   name = x;
      //   age = y;
      //   gpa = z;
      // }//parameter names are different so this -> isnt necessary
};


int main(){
  Student student1("juniper" , 21, 4.0);


  
  
   
    return 0;
}









