#include <iostream>
#include <ctime>


using text_t = std::string;

text_t concatStrings(text_t one, text_t two);
int main(){
    text_t fstname;
    text_t lstname;
    text_t full;

    std::cout << "type first name: ";
    std::cin >> fstname;

    std::cout << "\ntype in last name: ";
    std::cin >> lstname;

    full = concatStrings(fstname, lstname);

    std::cout << "your full name is: " << full;

    return 0;
}
text_t concatStrings(text_t one, text_t two){
    return one + ' ' + two;
}



