#include <iostream>
#include <ctime>
#include <iomanip>
//set precision after floating point numbers

using text = std::string;


int main(){

    text questions[] = {"1) what year was c++ created?: " , 
                        "2) who invented c++?: " , 
                        "3) what is the predesesor to c++?: " , 
                        "4) how long does it take for sunlight to reach earth?: "};

    text options[][4] = {{"A) 1969", "B) 1975", "C) 1985", "D) 1989"},
                        {"A) Guido Van Rossum", "B) Bjarne Stroustrup", "C) John C++", "D) Nikola Tesla"},
                        {"A) C+ ", "B) C--", "C) C", "D) B++"},
                        {"A) 20 minutes and 45 seconds", "B) 19.84 seconds", "C) 8 minutes and 20 seconds", "D) 2 hours 51 minutes and 49 seconds"}};
    //note that the row box can be left empty, but column can't
    //each row corresponds to a different question, each column corresponds to a different answer choice

    char answers[] = {'C' , 'B', 'C', 'C'};
    //save answers in a single array

    int size = sizeof(questions)/sizeof(questions[0]);
    char guess;
    int score;

    for(int i = 0; i < size; i++){
        //outer loop:control which question the user is on
        std::cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
        std::cout << '\n' << questions[i] << '\n';
        std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << '\n';

        for (int j = 0; j < sizeof(options[i])/sizeof(options[i][0]); j++){
            //inner loop: display the options of each question
            std::cout << options[i][j] << '\n';
        }
       
        //checks if user typed correct answer
        std::cin >> guess;
        guess = toupper(guess);
            //make user input uppercase, less work for us
        if(guess == answers[i]){
            std::cout << "correct! so smart!!\n";
            score++;
        }else{
            std::cout << "wrong\n" << "answer: " << answers[i] << "\n";
        }

    }
    //show user their results
    std::cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
    std::cout << "             results:             ";
    std::cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
    std::cout << "correct guesses: " << score << '\n';
    std::cout << "number of questions: " << size << '\n';
    std::cout << "score: " << (score/(double)size) * 100 << "%";
        //size must be casted to a double, because otherwise the answer will be an int (0) before the multiplication.
         
    return 0;
}




