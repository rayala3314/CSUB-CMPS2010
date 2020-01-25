#include <iostream>
#include <cstdlib>
const int ROWS = 100;
const int COLS = 50;

using namespace std;

//Menu based user selection for calculation


void displayMenu();
int choice();
int  sum(int array[ROWS][COLS]);
void average(int array[ROWS][COLS], int sum);
void colAverage( int array[ROWS][COLS]);
void rowAverage( int array[ROWS][COLS]);
void sortRow(int array[ROWS][COLS]);
int linSearch(int array[ROWS][COLS], int usrRow, int value);


int main (){

    //displayMenu();

    int userInput,arr[ROWS][COLS];
    srand(25);
   
    for ( int i = 0; i < ROWS; i++){

        for ( int j = 0; j < COLS; j++ ){

            arr[i][j] = ( rand() % 148 ) - 72;

            

        }
        

    } 


  //  cout << arr[0][5];
    
    do{
        displayMenu();
        userInput = choice();

        switch(userInput)
        {
            case 1:{
                       int total;

                       total = sum(arr);
                       cout << endl;
                       cout << "The total sum is: " << total << endl << endl;
                       break;
                   }

            case 2: 
                   {
                        int arrSum;
                        arrSum = sum(arr);
                        average(arr,arrSum);
                        break;
                        
                    


                   }
            case 3:
                   {

                        colAverage(arr);
                        break;

                                    

                   }
            case 4: 
                   {

                        rowAverage(arr);
                        break;
                    
    

                   }
             case 5: {


                        sortRow(arr);
                        
                        break;
                    
                     }
             case 6: {
                        int usrRow, value;
                        cout << "Enter a row and value to search for(space separated) : \n";
                        cin >> usrRow >> value;
                        int searchedAnsw = linSearch(arr, usrRow, value);
                        cout << "Found: " << searchedAnsw << endl;
                
    

                     }



        }




    }while(userInput != 7 );


    return 0;

}
void displayMenu(){
    cout << "1. Call the 'Sum' function\n";
    cout << "2. Call the 'Average' function\n";
    cout << "3. Call the 'Column Average' function\n";
    cout << "4. Call the 'Row Average' function\n";
    cout << "5. Call the 'Sort Row' function\n";
    cout << "6. Call the 'Search' function\n";
    cout << "7. Exit Program\n";


}
int choice(){
    int choice;
    cin >> choice;
    

    return choice;
}
int sum(int array[ROWS][COLS]){
    int sum;
    for ( int i = 0; i < ROWS; i++){
        for (int j = 0; j < COLS; j++){
            sum += array[i][j];
        
        }
    }
    return sum;
}

void average(int array[ROWS][COLS], int sum)
{
   
     double average;
     average = (sum*1.0) / ( ROWS + COLS );
     
     cout << endl; 
     cout << "The average is: " << average << endl << endl;


}
void colAverage(int array[ROWS][COLS]){

    int sum = 0;
    static int usrCol;
    double average;
    cout << "Enter a column from 0 to 49 of which you would like to see the average: \n";
    cin >> usrCol;
    for( int rows = 0; rows < ROWS; rows++){
            sum += array[rows][usrCol];



    }
    average = (sum * 1.0)/(ROWS);

    cout << endl;
    cout << "The average is: " << average << endl << endl;
}
void rowAverage(int array[ROWS][COLS]){
    int sum = 0;
    static int usrRow;
    double average;
    cout << "Enter a row from 0 to 99 of which you would like to see the average of: ";
    cin >> usrRow;
    for(int cols = 0; cols < COLS; cols++){
       sum += array[usrRow][cols];



    }

    average = (sum * 1.0)/(COLS);
    cout << endl;
    cout << "The row average is: " << average << endl << endl;

}
void sortRow(int array[ROWS][COLS]){
    int temp;
    static int usrRow;
    cout << "Enter a row from 0 to 99 you would like to sort: \n";
    cin >> usrRow;
  
    for(int i = 0; i <= ROWS-1; i++){
      
        for(int j = i + 1; j <= COLS-1; j++){
           

            if(array[usrRow][i] > array[usrRow][j])
            {
                temp = array[usrRow][i];
                array[usrRow][i] = array[usrRow][j];
                array[usrRow][j] = temp;
            
       
                }
    

        }


    }

    char usrAnsw;
    cout << "Array has been sorted! \n";
    cout << "Would you like to see the min and max of this row? ( Y or N) : \n";
    cin >> usrAnsw;
    cout << endl;
    int min = 0, max = 0;

    if ( usrAnsw == 'Y' || usrAnsw == 'y'){
       for(int i = 0; i < COLS; i++){
         if(array[usrRow][i] < min){
            min = array[usrRow][i];
          }

         else  if(array[usrRow][i] > max){
            max = array[usrRow][i];
         }

        }


     }

    


    
    else if ( usrAnsw == 'N' || usrAnsw == 'n' ){
        
        

    }
    else {

       usrAnsw = 0;
    
    }
    cout << "The min number in your selected row is: " << min << endl;
    cout << "Th max number in your selected row is: " << max << endl << endl;
}
int linSearch(int array[ROWS][COLS], int usrRow, int value){

    for (int i = 0; i < COLS; i++){
        if (array[usrRow][i] == value){
            return array[usrRow][i];




        }
         

       

    }
    return -1;


    
}
