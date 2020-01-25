#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <cstring>

using namespace std;
const int SIZE = 100;
void method_one(char vow[], char usr_str[]);
void method_two(char vow[], char usr_str[]);


int main(){

    char vowels[] = "aeiouyAEIOUY";
    char u_string[SIZE];


    cout << "Please enter a string to determine the number of vowels and consonants it has: \n";
    cin.getline(u_string, SIZE);
    cout << u_string << endl;

    method_one(vowels, u_string);
    method_two(vowels, u_string);














    return 0;





}

void method_one(char vow[], char usr_str[]){

    int vowelCounter = 0;
    int consonantCounter = 0;
    
    for( unsigned int i = 0; i < strlen(usr_str); i++){

        if (strchr(vow, usr_str[i]) != nullptr){
            vowelCounter++;
             
      
         }
         else {

            consonantCounter++;
         }



    }
    cout << endl;
    cout << "Vowel search Method One \n";
    cout << "-------------------------- \n";
    cout << "Vowels: " << vowelCounter << endl  << "Consonants: " << consonantCounter << endl;
}


void method_two(char vow[], char usr_str[]){
    int ascArr[256] = {0};
   char vowels[] = "aeiouyAEIOUY";
    
    int length = strlen(usr_str);

    for(char vowel : vowels){
        ascArr[(int)vowel ] = 1;
        
        

    }
    
    int vowelCount = 0;
    int consonantCount = 0;
    for( int i = 0; i < length; i++){

        if(isalpha(usr_str[i])){

            if(ascArr[(int)usr_str[i]]){

                vowelCount++;


            }
            else {

                consonantCount++;
            }

        }
        else {
                consonantCount++;
         }



                
    }
    cout << endl;
    cout << "Vowel search Method Two \n";
    cout << "---------------------- \n";
    cout << endl <<  "Vowels: " << vowelCount << endl <<"Consonants: " << consonantCount << endl;

}


