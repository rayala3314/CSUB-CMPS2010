#include <iostream>
#include <cstring>
#include <iomanip>
#include <fstream>

using namespace std;


class Game {
    int chances;
    int lettersFound;
    char *preDefined;
    char *underScores;
    int wordLength;
    public:
    void setChances(int s){
        chances = s;
    
    }
    int getChances(){
        return chances;

    }
    void resetGame(){
        
        wordLength = 0;
        lettersFound = 0;
        delete [] preDefined;
        delete [] underScores;
        
    }
    
    void startGame(char *word){
    
        wordLength = strlen(word);
        
        preDefined = new char [wordLength];
        underScores = new char [wordLength + 1];
        cout << "Welcome to the game of snowman!! Try to guess the hidden word! \n\n";
        for( int i = 0; i < wordLength; i++){
            preDefined[i] = word[i];

        }
        
        
        cout << "You have " << chances << " attempts" << " to try and guess the word.";
           cout << " Ready, Set, GO! \n\n";
        for( int i = 0; i < wordLength; i++){
            underScores[i] = static_cast<char>(95);
             cout << underScores[i] << " ";

        }
        
      cout << endl << endl; 

    }
    void check(char c){
        int counter = 0;
       
        if ( isalpha(c)){
            if(strchr(preDefined, c) != nullptr){
                if(strchr(underScores,c) == nullptr){
                    
                    for(int i = 0; i < wordLength; i++ ){
                        if( preDefined[i] == c ){
                            underScores[i] = c;
                            lettersFound++;
                            counter++;
                        }
                        

                    }

                    if( counter > 1 ){

                        cout << "There is " << counter << " " << c;
                        cout << "\'s" << " in the word\n\n";

                    }else{
                        
                        cout << "There is " << counter << " " << c << " in the word\n\n";


                    }                
    
                }else{
                    chances--;
                    cout << "You already guessed " << c << " you have " << chances;
                    cout << " chance(s) left\n";
                    
                    
                }






                    }else{
                        chances--;
                        cout << "The letter " << c << " is not in the word ";
                        cout << "you have " << chances << " chance(s) left\n";
                        
                    
                    }



        }else{
            chances--;
            cout << c <<  " is not a letter. You have " << chances << " chance(s) left\n";
            
            
        }     
   
      for ( int i = 0; i < wordLength; i++ ) {

            cout << underScores[i] << " ";

      }
             
            cout << endl;
            
    }
   void showRevealed(){

    for( int i = 0; i < wordLength; i++ ){
        cout << preDefined[i];


    }
    cout << endl;
   }

   int letterCount(){
       return lettersFound;

   }

   int playerWins(){
        int checkWin; 
        
        for(int i = 0; i < wordLength; i++){
             checkWin = strcmp(preDefined, underScores);
            

        }
        if(checkWin == 0 && chances > 0){

            return true;
        }
    
        return false;
   }

   int playerLoses() {
        
        if (chances == 0 ){

            return true;

        }
        return false;
   }
   void showSnowman() {

       
        ifstream inputFile;
        if( chances == 6){
        inputFile.open("6c.txt");
        }
        else if ( chances == 5){
            inputFile.open("5c.txt");
        }
        else if(chances == 4){
            inputFile.open("4c.txt");
    
        }
        else if( chances == 3){
            inputFile.open("3c.txt");

        }
        else if(chances == 2){
            inputFile.open("2c.txt");

        }
        else if(chances == 1){
            inputFile.open("1c.txt");

        }

        char fig[300];

        cout << endl << endl;
        if(inputFile){
           while(inputFile.getline(fig, 300)){
            
            cout << fig << endl;
            }

            
        }
        else{
            cout << "Error opening file";
        }
        inputFile.close();
        
   }



};

int main () {

    char word[] = "extravagant";
    int chances = 7;
    
    Game snowman;
    
    cout << endl << endl;
    snowman.setChances(chances);

    snowman.startGame(word);        
     
   
   do{
       

    char userLetter;
    cout << "Enter a letter: \n";
    cin >> userLetter;
    cout << endl;
    
    snowman.check(userLetter);
    snowman.showSnowman();

    int letters = snowman.letterCount();
    cout << endl;
    
    
    if(snowman.playerWins() == true){
        system("clear");
       
        cout << endl;
        cout << "Congratulations! you won the game! \n";
        cout << "The hidden word you guessed was: ";
        snowman.showRevealed();
        cout << "The total amount of letters found: " << letters << endl << endl;
        break;
    }

    }while(snowman.getChances() != 0);
    


      if( snowman.playerLoses() == true ){
        system("clear");
        int letters = snowman.letterCount();
        cout << endl;
        cout << "Sorry! You ran out of chances! Better luck next time! \n";
        cout << "The hidden word was: ";
        snowman.showRevealed();
        cout << endl;
        
        cout << "You guessed: " << letters << " letter(s) correctly" << endl;


   }
    snowman.resetGame();
    
return 0; 
}
