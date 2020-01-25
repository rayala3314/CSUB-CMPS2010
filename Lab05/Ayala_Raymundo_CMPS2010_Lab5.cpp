#include <iostream>
#include <iomanip>

using namespace std;

int square(int num);
int cube(int num2);
float approximate_pi(float iterations);

int main () {

    int arr[100];
    
         
   
    for(unsigned int i = 0; i < 100; i++){

        if (i % 2 == 0){
            arr[i] = square(i);
           
               
        }
        else if (i % 2 == 1) {

            arr[i] = cube(i);

        }

        cout << "Index: " << i << "  Value: " << arr[i] << " | ";   
  
    




    }
   



    cout << endl << endl;
    int times;
    cout << "Enter the amount of times you want the iteration to happen" << endl;
    cin >> times;

    float pi = approximate_pi(times);
    cout << pi << endl;
       

    return 0;
}


int square(int num){

    return num * num;



}

int cube(int num2){

    return num2 * num2 * num2;

}
float approximate_pi(float iterations){
    float pi = 4.0;
    for (int i = 1; i < iterations; i++){
        if(i % 2){
        pi -= 4.0 / ( i * 2 + 1);
    
        }
        else {
            pi += 4.0 / (i * 2 + 1);

        }





    }

    return pi;
}
