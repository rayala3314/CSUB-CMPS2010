#include <iostream> 
#include <cstdlib>

using namespace std;

//Nummber guessing game

int main () {

    srand ( time(0) );
    int randNum = ( rand () % 10 ) + 1;
    int userInput;
    cout << "Please enter a number between 1 and 10: " << "\n";

    cin >> userInput;

    if ( userInput == randNum ) {

        cout << "You won!!!" << "\n";

    }

    else if ( userInput != randNum ) {
        cout << "Please try again: " << "\n";
        cin >> userInput;

    
        if ( userInput == randNum ) {

            cout << "You won!!" << "\n";

          }
    

    else {

        cout << "Sorry you are out of tries :( " << "\n";

    }

    }
    return 0;



}
