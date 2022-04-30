#include <iostream>
using namespace std;
int main()
{
    int num=0, sum=0;
    cout << "Enter any number = ";
    cin >> num;
    // while num not gets zero countinue this loop
    while(num != 0)
    {
      // at first sum = 12345 % 10 = 1234
    sum += num % 10;
    num = num / 10;
    }     
    cout << "\nSum of digits are " << sum;
    return 0;
}