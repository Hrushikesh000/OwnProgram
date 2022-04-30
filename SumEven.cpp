/*Example
Input : num = 8
Output : 36

Where first 8 number is 1, 2, 3, 4, 5, 6, 7, 8
Sum of numbers = 1 + 2 + 3 + 4 + 5 + 6 + 7 + 8 = 36 
*/

#include <iostream>
using namespace std;

int main()
{
    int num=0 , sum=0;
    cout << "\nEnter the number = ";
    cin >> num;

    for(int i=1; i<=num; i++)
    sum+=i;
    cout << sum;
    return 0;
}
// also we can solve this by using formulae of 'Sum of Nth Term'
// cout << n*(n+1)/2;