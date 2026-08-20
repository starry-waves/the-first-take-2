#include <iostream>
#include <ctime>
#include <iomanip>
//set precision after floating point numbers

using namespace std;
using text = std::string;

//luhn algorithm:
//1. double every second digit from right to left. if doubled number is 2 digits, split them
//2. add all single digits from step 1
//3. add all odd numbered digits (ex 103: 1 is the 3rd digit, so it is an odd numbered digit) from right to left
//4. sum results from steps 2 and 3
//5. if result from step 4 is divisible by 10, then the number is valid

int getdigit(const int num);
int sumodd(const text cardnum);
int sumeven(const text cardnum);

int main(){
    text cardnum;
    int result = 0;
    cout << "enter a credit card number: ";
    cin >> cardnum;

    result = sumeven(cardnum) + sumodd(cardnum);

    if(result % 10 == 0){
        cout << "card number is valid!";
    } else{
        cout << "invalid card number!";
    }


    return 0;
}
int getdigit(const int num){

    return num % 10 + (num / 10 % 10);
}
int sumodd(const text cardnum){
     int sum = 0;
    
    for(int i = cardnum.size() - 1; i >= 0; i -= 2){
        sum += cardnum[i] - '0';
    }
        //subtract '0' or 48 to get true value, not ascii decimal value
    return sum;
}
int sumeven(const text cardnum){

    int sum = 0;
    
    for(int i = cardnum.size() - 2; i >= 0; i -= 2){
        sum += getdigit((cardnum[i] - '0') * 2);
        //subtract '0' or 48 to get true value, not ascii decimal value
    }

    return sum;
}







