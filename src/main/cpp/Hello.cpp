#include <iostream>
#include <ctime>
#include <iomanip>
//set precision after floating point numbers

using namespace std;
using text = std::string;


int main(){

    int *pNum = NULL;
    pNum = new int;
    //save to heap
    *pNum = 21;

    cout << "address: " << pNum << '\n';
    cout << "value" << *pNum <<'\n';

    delete pNum;
    //free up memory after using new operator

    char *pGrades = NULL;
    int size;
    cout << "how many grades should be entered?: ";
    cin >> size;
    
    pGrades = new char[size];

    for (int i = 0; i < size; i++){
        cout << "enter grade " << i + 1 << ") ";
        cin >> pGrades[i];
    }

    for (int i = 0; i < size; i++){
        cout << pGrades[i] << " ";
    }

    delete[] pGrades;

    return 0;
}







