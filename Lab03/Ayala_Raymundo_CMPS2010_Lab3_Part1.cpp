#include <iostream>

using namespace std;

//Internal number representation of char

int main ()
{

    char enteredChar;

    cout << "Please enter a character in the alphabet (e.g a-z,A-Z): " << " \n";

    cin >> enteredChar;

    cout << "The character you have entered is: " << enteredChar << "\n";

    cout << "The internal intergere representation of your character is: " << static_cast<int>(enteredChar) << "\n";

    if ( static_cast<int>(enteredChar) % 2 == 0){

        cout << "The internal integer of your character is even" << "\n";


    }
        else {


            cout << "The internal integer of your character is odd" << "\n";

        }






    return 0;

}
