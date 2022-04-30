/*
Example
Input : 2020
Output : 2020 is a Leap Year
*/
#include <iostream>
using namespace std;
int main()
{
    int year;
    cout << "Enter year";
    cin >> year;
    //Actual logic
    if(year % 400 == 0)
    cout << year << " Is a leap year";
    else if(year % 4 ==0 && year % 100 != 0)
    cout << year << " Is leap year";
    else 
    cout << year << " Is not leap year";
    return 0;

}