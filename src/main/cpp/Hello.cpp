#include <iostream>
#include <ctime>
#include <iomanip>
//set precision after floating point numbers

using namespace std;
using text = std::string;

template <typename T, typename U> 

T max(T x, U y){
    return (x > y) ? x : y;
}
int main(){

  int z = ::max(2, 3.1);
  //use scope resolution operator to tell compiler to look outside of std namespace

  cout << z;
   

    return 0;
}









