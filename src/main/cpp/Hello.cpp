#include <iostream>
#include <ctime>
#include <iomanip>
//set precision after floating point numbers

using namespace std;
using text = std::string;

enum Day {sunday = 0, monday = 1, tuesday = 2, wednesday = 3, 
          thursday = 4, friday = 5, saturday = 6};
          //name + value
          //c++ implicitly assigns the numbers


int main(){

Day today = sunday;

  switch (today){
    case sunday:
      cout << "today is sunday";
      break;
    case monday:
      cout << "today is monday";
      break;
    case tuesday:
      cout << "today is tuesday";
      break;
    case wednesday:
      cout << "today is wednesday";
      break;
    case thursday:
      cout << "today is thursday";
      break;
    case friday:
      cout << "today is friday";
      break;
    case saturday:
      cout << "today is saturday";
      break;
  }

   
    return 0;
}









