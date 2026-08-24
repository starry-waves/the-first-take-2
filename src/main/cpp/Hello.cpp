#include <iostream>
#include <ctime>
#include <iomanip>
//set precision after floating point numbers

using namespace std;
using text = std::string;

class Human{
    public:
      text name;
      text job;
      int age;

      void eat(){
        cout << "this person is eating! \n";
      }

      void drink(){
        cout << "this person is drinking! \n";
      }

      void sleep(){
        cout << "this person is sleeping!\n";
      }
};


int main(){

  Human human1;
  human1.name = "juniper";
  human1.job = "scientist";
  human1.age = 21;

  cout << human1.name << '\n';
  cout << human1.job << '\n';
  cout << human1.age << '\n';
  human1.eat();
  human1.drink();
  human1.sleep();
   
    return 0;
}









