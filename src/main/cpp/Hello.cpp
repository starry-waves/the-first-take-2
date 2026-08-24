#include <iostream>
#include <ctime>
#include <iomanip>
//set precision after floating point numbers

using namespace std;
using text = std::string;

class Stove{
   private:
    int temperature = 0;
    public:
    Stove(int temperature){
      settemp(temperature);
    }
    int gettemp(){
      return temperature;
    }
    void settemp(int temp){
      if(temp < 0){
        this -> temperature = 0;
      }
      else if(temp >= 10){
        this -> temperature = 10;
      } 
      else{
        this -> temperature = temp;
      }
    }

  
  
};


int main(){
  Stove stove1(5);

  stove1.settemp(-3);
  cout << "the temp is: " << stove1.gettemp();
  
  
   
    return 0;
}









