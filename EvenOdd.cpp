/*
Example 
Input : num = 12
Output : Even
Example 
Input : num = 11
Output : Odd
*/
#include <iostream>
using namespace std;

int main()
{
    int number = 0;
    cout << "\nEnter the Number = ";
    cin >> number;
    // zero 0 is even number no need of filter
    //Actual logic
    if(number % 2 == 0)
    {
    cout << "Given number is Even";
    }
    else
    cout << "Given number is Odd";
}