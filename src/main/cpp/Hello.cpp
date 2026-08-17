#include <iostream>
#include <ctime>
#include <iomanip>
//set precision after floating point numbers

using text_t = std::string;

void showbalance(double bal);
double deposit();
double withdraw (double bal);
int main(){
    double balance = 123.98;
    int choice = 0;
    do{
        std::cout << "welcome to bank from temu: please type the corresponding number to what u would like to do";
        std::cout << "\n1. show balance\n2. deposit money\n3. withdraw money\n4. exit\n";
        std::cin >> choice;
        std::cin.clear();
        fflush(stdin);
        //clears input buffer, then flushes it (doesn't work, my program is still acting weird when i type a character!)

        switch(choice){
            case 1:
            showbalance(balance);
            break;
            case 2:
            balance += deposit();
            showbalance(balance);
            break;
            case 3:
            balance -= withdraw(balance);
            showbalance(balance);
            case 4:
            std::cout << "thanks for visiting!\n";
            break;
            default:
            std::cout << "invalid choice\n";
        }
    } while(choice != 4);
    
}
void showbalance(double bal){
    std::cout << "ur balance is: $" << std::setprecision(2) << std::fixed << bal << '\n';
}
double deposit(){
    double amount = 0;

    std::cout << "enter amount to deposit: \n";
    std::cin >> amount;

    if (amount > 0){
        return amount;
    } else{
        std::cout << "that is not possible\n";
    }
    

}
double withdraw (double bal){
    double amount = 0;
    std::cout << "enter amount to withdraw: \n";
    std::cin >> amount;

    if (amount > bal){
        std::cout << "that is not possible\n";
    }else if(amount < 0){
       std::cout << "that is not possible\n";
    }else{
        return amount;
    }
}