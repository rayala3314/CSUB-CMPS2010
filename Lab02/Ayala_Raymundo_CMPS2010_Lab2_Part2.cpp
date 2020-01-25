 #include <iostream>
 
 

using namespace std;

//using cin operator to calculate numbers

 int main ()
   {
       int x,y,z;

       cout << "Please enter an integer: " << "\n";

       cin >> x;

       cout << "The number you have entered is: " << x << "\n";

       cout << "Please enter another integer you would like to multiply your first choice by: " << "\n";
       cin >> y;

       z = x*y;
       cout << "The result when multiplying both of your integers is: " << z << "\n";


      return 0;

   }  


