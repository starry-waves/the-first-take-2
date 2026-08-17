#include <iostream>
#include <ctime>
#include <iomanip>
//set precision after floating point numbers

using text_t = std::string;

char getuserchoice();
char getcompchoice();
void showchoice(char choice);
void choosewinner(char player, char computer);

int main(){

    char player;
    char comp;

    player = getuserchoice();
    std::cout << "your choice: ";
    showchoice(player);

    comp = getcompchoice();
    std::cout << "\ncomputer's choice: ";
    showchoice(comp);
    choosewinner(player , comp);
    
}
char getuserchoice(){
    char player;
    std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~\n";
    std::cout << "rock paper scissors game!\n";
    std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~\n";
    do{
        std::cout << "type r for rock, p for paper, or s for scissors: \n";
        std::cin >> player;
    }while(player != 'r' && player != 's' && player != 'p');

    return player;
}
char getcompchoice(){
    srand(time(NULL));
    int num = (rand() % 3) + 1;

    switch(num){
        case 1:
        return 'r';
        
        case 2:
        return 'p';

        case 3:
        return 's';
    } //note: the break statement isnt required because the return keyword already does that
}
void showchoice(char choice){

    switch(choice){
        case 'r':
        std::cout << "rock";
        break;

        case 'p':
        std::cout << "paper";
        break;

        case 's':
        std::cout << "scissors";
        break;
    }
}
void choosewinner(char player, char computer){
    switch(player){
        case 'r':
        if(computer == 'r'){
            std::cout << "\nits a tie!\n";
        }else if(computer == 's'){
            std::cout << "\nyou win!\n";
        } else{
            std::cout << "\ncomputer wins!";
        }
        break;

        case 'p':
        if(computer == 'p'){
            std::cout << "\nits a tie!\n";
        }else if(computer == 'r'){
            std::cout << "\nyou win!\n";
        } else{
            std::cout << "\ncomputer wins!";
        }
        break;

        case 's':
        if(computer == 's'){
            std::cout << "\nits a tie!\n";
        }else if(computer == 'p'){
            std::cout << "\nyou win!\n";
        } else{
            std::cout << "\ncomputer wins!";
        }
        break;
        
    }
}