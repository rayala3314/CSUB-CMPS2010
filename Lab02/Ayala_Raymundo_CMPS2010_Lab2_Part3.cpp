#include <iostream>

using namespace std;

int main ()
{
    float hourlyRate, weekHours, weekSalary, monthSalary, annualSalary, monthHours, yearHours;
    

    cout << "Enter your hourly rate where you work: " << "\n";
    cin >> hourlyRate;

    cout << "Now enter the amount of hours you work per week: " << "\n";
    cin >> weekHours;
    
    monthHours = weekHours*4;
    yearHours = weekHours*52;
    weekSalary = hourlyRate * weekHours;
    monthSalary = monthHours * hourlyRate;
    annualSalary = yearHours * hourlyRate;

    cout << "Below you will see your salary by week, month, and year: " << "\n";
    cout << "Weekly Salary: $" << weekSalary << "\n" << "Monthly Salary: $" << monthSalary << "\n" << "Annual Salary: $" << annualSalary << "\n";

    return 0;
}
        
    
