#include <iostream>

//temp conversion program!

using text_t = std::string;

int main(){

    text_t name;
    std::cout << "enter ur name: ";
    std::getline(std::cin, name);
    //use getline bc names can have spaces

    name.length();
    //gives length of string
    if (name.length() > 12 ){
        std::cout <<"name cant be more than 12 characters";
    } else if(name.empty()){ //checks if string is empty
        std::cout << "your lazy ahh did not enter a name";
    }else{
        std::cout << "welcome " << name << "! \n";
    }

    //name.clear()
    //clears string

    // name.append(" @ gmail.com");
    //add a sting to the end of another string
    std::cout << "your email is: " << name;

    //name.at(x)
    //think of it as chat.at(), finds character at a given position (remember it starts at 0)
   
    //name.insert(x , "y")
    //accepts 2 arguments, inserts a string at given position

    //name.find(' ');
    //gives position of the first instance of the given character

    //name.erase(x , y);
    //erases the characters from index x (inclusive) to index y (exclusive)


    return 0;
}

