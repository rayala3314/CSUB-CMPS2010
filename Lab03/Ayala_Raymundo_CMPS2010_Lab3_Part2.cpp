#include <iostream>

using namespace std;

//Internal Number of character

int main ()
{

    char  enteredChar;

    cout << "Please enter a character in the alphabet (e.g a-z,A-Z): " << " \n";
    cin >> enteredChar;
    int revisedChar = static_cast<int>(enteredChar);
    
    if ( revisedChar <= 90 && revisedChar >= 65 ) {

       revisedChar += 32;
       cout << static_cast<char>(revisedChar) << "\n";
       }

     else if ( revisedChar <= 122 && revisedChar >= 97 ) {
         revisedChar -= 32;

         cout << static_cast<char>(revisedChar) << "\n";
     }
    else {
        cout << "Please enter a correct character" << "\n";
    }
    
    return 0;

}
