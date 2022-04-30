/*
     Example :   Number : 12321
    Reverse : 12321

Both number & reverse are equal so palindrome number.
*/
#include <iostream>
using namespace std;


int main ()
{
    int num, reverse = 0, rem, temp;
 
    cout <<"Enter a number: "; 
    cin >> num;
 
    temp = num;
    while(temp != 0)
    {
        rem = temp % 10;
        reverse = reverse * 10 + rem;
        temp /= 10;
    };
    if (num == reverse)
        cout << num << " is Palindrome";
    else
        cout << num << " is not a Palindrome";
}