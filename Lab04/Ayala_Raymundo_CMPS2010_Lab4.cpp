#include <iostream>
#include <cstdlib>
#include <iomanip>
#include<cmath>


using namespace std;


int main () {

    int taskSelector;
    
    do {

    cout << "Please select a task to run by its number:\n 1.) Factorials\n 2.) Guessing game\n 3.) Coin flip\n 4.) Find the area of a circle " << endl;
    cin >> taskSelector;


    switch (taskSelector) {


        case 1:
            { 

             int numberChosen;
             cout << "Please enter an integer greater than or equal to 0: " << endl;
             cin >> numberChosen;
             //calculating factorial of number chosen

             int i, factorial; 
             for (i=0; i<=numberChosen; i++){
                    if (i == 0) {

                    factorial = 1;

                }

              else {
                  factorial = factorial * i;;


              }

             }

            cout << "The factorial of your inputted integer is: " << factorial << endl;


          }
        break;
        

        case 2: {

            srand(time(0));
            int randNum = ( rand () % 10) + 1;
            int userInput;


            cout << "Please enter a number between 1 and 10: " << endl;

            do {

            cin >> userInput;
            if(userInput == randNum){

                cout<< "You won!!" << endl;

            }
            else{

                cout<<"Please try again"<< endl;

            }




            }while(userInput != randNum);






        }

         break;
        

        case 3: {

            srand(time(0));
            int  i, totalHeads = 0, totalTails = 0;
            float amountFlipped;
            cout << "Please enter an integer representing the amount of times you would like to flip a coin: " << endl;
            cin >> amountFlipped;

            for( i = 1; i <= amountFlipped; i++ ) {

                 int randNum = rand() % 2;
                 if ( randNum  == 0) {
                     totalHeads++;
                 }
                 if (randNum == 1 ) {
                    totalTails++;
                 }
   
            
            }

    
            cout << "The total amount of heads obtained is: " << totalHeads << endl << "The likelihood percentage is: " << fixed << setprecision(2) <<  (totalHeads/amountFlipped) * 100 << " %\n";
            cout << "The total amount of tails obtained is: " <<  totalTails << endl << "The likelihood percentage is: " << fixed << setprecision(2) <<  (totalTails/amountFlipped) * 100 << " %\n";


        } 

        break;

        case 4: {

        const double PI = 3.141592;    
        double  area, radius;

        cout << "Enter the radius of your circle: " << endl;
        cin >> radius;

        area = PI * radius * radius;

        cout << "The total area of your circle is equal to: " << area << endl;
    






       }
       break;






         }

    }
    while (taskSelector == 4 || taskSelector == 1 || taskSelector == 2 || taskSelector == 3 );
    return 0;

}
