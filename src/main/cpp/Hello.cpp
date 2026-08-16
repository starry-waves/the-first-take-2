#include <iostream>


using text_t = std::string;

int main(){

    for(int i = 1; i < 21; i++){
        if(i == 13){
            continue;
            //skips 13. if break is used, the loop stops once i = 13.
        }
        std::cout << i << '\n';
    }


    return 0;
}

