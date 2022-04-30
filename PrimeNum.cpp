/*Example 
Input : 5
Output : 5 is a Prime
*/
#include <iostream>
using namespace std;

int main()
{
    int  num=0, Count=0, a=0;
    cout << "\nEnter the number to check wheather its prime or not = ";
    cin >> num;
     // here we divided num with each and every number till num and if remainder is one only one time then number is prime
    for(int i=1; i< num+1; i++)
    {
        if(num % i == 0)
        Count += 1;
    }
      //filter
    if(num == 0 || num == 1)
    {
        cout << " Given number" << num << "is not prime";
    }
        // this filter because of we want remainder 1 only once so if perticular number have remaider
        //more than once then number is not prime
        else if(Count > 2)
        {cout << " Given number " << num << " is not prime";}
        else
        {cout << "Given number " << num << " is prime";}
}