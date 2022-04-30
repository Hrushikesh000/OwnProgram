#include <iostream>
using namespace std;
int main ()
{
    //initialising variable
    int num;
    cout << "Enter the positive number = ";
    cin >> num;
    cout << "Factors of number are: ";

     //actual logic
    for(int i=1; i <= num; i++)
    {
        if(num % i == 0)
        cout << i << " ";
    }
}