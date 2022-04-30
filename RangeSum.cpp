/*
Example
Input : 2 5
Output : 2 + 3 + 4 + 5 + 6 = 14
*/

#include <iostream>
using namespace std;

int main()
{
    int num1=0, num2=0, sum=0;
    cout << "\nEnter the First Number = ";
    cin >> num1;

    cout << "\nEnter the Second Number = ";
    cin >> num2;
    //Actual Logic
    for(int i=num1; i<=num2; i++)
    sum = sum+i;
    cout << sum;
    return 0;
}