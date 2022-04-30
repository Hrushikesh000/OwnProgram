#include <iostream>
using namespace std;

int main()
{
    int num, digit;
    cout << "Enter the number = ";
    cin >> num;

    while(num > 0)
    {
    digit = num%10;
    cout << digit;
    num = num / 10;
    }
    return 0;
}