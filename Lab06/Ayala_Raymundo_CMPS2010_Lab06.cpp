#include <iostream>
#include <cstdlib>

using namespace std;

//BubbleSort

const int  SIZE = 100;

int  max(int array[], int size);
int  min(int array[], int size);
void  setofMinMax( int array[], int size); 
void bubbleSort(int array[], int size);

int main (){

    int arr[SIZE];
    srand(15);
    cout << endl << endl;
    cout << "Original Array" << endl << "---------------------------------------------" << endl;
    for( int i=0; i < SIZE; i++ ){
        arr[i] =( (rand() % 166) - 70 );

     cout <<"|" <<  arr[i] << "|" << ",";

    }


    int maxNum = max(arr, SIZE);
    int minNum = min(arr, SIZE);
    cout << endl << endl;
    cout << "The Maximum number in the array is: " << maxNum << endl;
    cout << "The Minimum number in the array is: " << minNum << endl;
    cout << "----------------------------------------\n";

    setofMinMax(arr, SIZE);

    cout << "Array Sorted" << endl << "-----------------------------" <<endl;

    bubbleSort(arr, SIZE);


    return 0;

}

int max(int array[], int size){

    int i,max = 0;
   
    for(i = 0; i < size; i++){

     if (array[i] > max ){
        max = array[i];
    
     }



    }
    
  
    return max;

}
int min(int array[], int size){
    int i, min = 0;
    for(i = 0; i < size; i++){
        if ( array[i] < min){
            min = array[i];
        }
    
    }



    return min;
}

void setofMinMax(int array[], int size){

    int i,max1,max2,max3, min1, min2, min3;
    max1 = max2 = max3 = array[0];
    min3 = min2 = min1 = array[0];
        
    for(i = 0; i < size; i++){
            if(array[i] > max1){ 
                max3 = max2;
                max2 = max1;
                max1 = array[i];

            }
            else if ( array[i] > max2 ) {
                max3 = max2;
                max2 = array[i];
            }
            else if (array[i] > max3){
                max3 = array[i];
            }
            if(array[i] < min3){
                min3 = min2;
                min2 = min1;
                min1 = array[i];
            }
            else if (array[i] < min2 ){
                min3 = min2;
                min2 = array[i];
            
            }
            else if (array[i] < min3 ){
                min3 = array[i];
            }
        }

cout << "The  largest number in the array is: " <<  max1 << endl;
cout << "The second largest number in the array is: " << max2 << endl;
cout << "The third largest number in the array is: " << max3 << endl;
cout << "---------------------------------------------\n";
cout << "The  smallest number in the array is: " << min3 << endl;
cout << "The second smallest number in the array is: " << min2 << endl;
cout << "The third smallest number in the array is: " << min1 << "\n\n";


}
void bubbleSort(int array[], int size){

   int i,j;
   for(i = 0; i <= size - 1; i++){

    for(j = i+1; j <= size - 1; j++){
        int temp;

        if(array[i] > array [j]){

            temp = array[i];
            array[i] = array[j];
            array[j] = temp;
        }

        
        
    }

    

   }

   for ( i = 0; i < size; i++){
       
       cout << "|"<< array[i] <<"|" << ",";
       
    

   }


cout << endl;   
}
