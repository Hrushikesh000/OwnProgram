/*
For Instance,
Input : num = 10
Output :The number is Positive
For Instance,
Input : num = -10
Output :The number is Negative
*/

#include <iostream>
using namespace std;
int main ()
{
    int num = 0;
    cout << "\nEnter the Number = ";
    cin >> num;
    //filter
    if(num == 0)
    cout << "Given number is zero"; 
    //Actual logic
    if(num > 0)
    {
        cout << "Given number is Positive";
    }
    else 
    cout << "Given number is Negative";
}