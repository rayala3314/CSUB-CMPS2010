#include <iostream>
#include <fstream>
#include <cstring>

const int SIZE = 100;

using namespace std;

int main () {
    
    char arr[SIZE];
    char fileWord[SIZE];
    cout << "Enter any word of your preference: \n";
    cin.getline(arr, SIZE);
    bool flag = false;

    ifstream inputFile;
    inputFile.open("/usr/share/dict/cracklib-small");
    
    
    if(inputFile){
         while(inputFile.getline(fileWord, SIZE)){
             int check = strcmp(fileWord, arr);
            if(check == 0){
                flag = true;
               
            }
         }
            
            if(flag){
                cout <<"Word is in Dictionary!\n";

            }
            else{

                cout << "Word is not in Dictionary!\n";
            }
            
         
        

    }
    else {

     cout << " Error opening dictionary \n";
    

    }


    inputFile.close();










return 0;
}
