/*
For Example: 28
Divisors : 1 + 2 + 4 + 7 + 14 = 28
*/
#include <iostream>
using namespace std;
int main()
{
    int num,sum=0;
    cout << "Enter the number to check perfect = ";
    cin >> num;
     
     //actual logic
    for(int i=1; i< num; i++)
    {
        if(num % i == 0)
        sum = sum + i;
    }
    if(sum == num)
    cout << num << " is a perfect number";
    else 
    cout << num << " is not a perfect number";
}  