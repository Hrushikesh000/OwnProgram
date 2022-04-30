/*
Example
Input : num1 = 23 , num2 = 43
Output : 43
*/
#include <iostream>
using namespace std;

int main()
{
    int num1=0, num2=0;
    cout << "\nEnter First Number = ";
    cin >> num1;
    cout << "\nEnter Second Number = ";
    cin >> num2;
    //filter
    if(num1 == num2)
    cout << "Both are equal";
    //Actual logic
    if(num1 > num2)
    cout << num1 << " Is greater than " << num2;
    else 
    cout << num2 << " Is greater than " << num1;
    return 0;

}