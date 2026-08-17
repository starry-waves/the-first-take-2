#include <iostream>
#include <ctime>
#include <iomanip>
//set precision after floating point numbers

using text = std::string;


double gettotal(double prices[], int size);
int main(){

double prices[] {49.99 , 75.00 , 34.45 , 15.05 };
int size = sizeof(prices)/sizeof(prices[0]);
double total = gettotal(prices , size);

std::cout << "$" << total;
return 0;
}

double gettotal(double prices[], int size){
//function is unaware of size of array, so pass in the array and the size
    double total = 0;

    for(int i = 0; i < size; i++){
        total += prices[i];
    }

    return total;
}

