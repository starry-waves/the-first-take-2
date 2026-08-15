#include <iostream>

//ternary operator

using text_t = std::string;

int main(){

    // int grade = 75;

    // grade >= 60 ? std::cout << "you pass! yay!" : std::cout << "you fail! loser";

    int num = 9;

    num % 2 == 0 ? std::cout << "the number is even" : std::cout << "the number is odd";
    // note: number 1 corresponds to true, while 0 corresponds to false. so if the ==0 asn't there, the expression would evaluate to true because it would equal ne. since the true case says it's even, this results in a logical error. to fix, switch the cases.

    bool hungry = true;

    hungry ? std::cout << "ur hungry" : std::cout << "ur full"; 
    // or
    std::cout << (hungry ? "you are hungry" : "you are full");
    
    return 0;
}

