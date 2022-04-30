#include <iostream>
using namespace std;
//Derived Function
// getting inputs for n from i in main class 
bool isPrime(int n)
{
    int count = 0;
    //filter if n<2 which is 1 and 0 is not prime then return false
    if(n < 2)
    return false;
     // here we check number is prime or not
    for(int i=2; i<n; i++)
    {
    if(n % i == 0)
    return false;
    }
    return true;
}
//Main Function
int main ()
{
    int upper, lower;
    cout << "Enter upper range and then lower range = ";
    cin >> lower >> upper;
    //now we sending all numbers in range one by one using this loop to isPrime() function to check which among these numbers are prime
    for(int i=lower; i <= upper; i++)
    
        if(isPrime(i))
        cout << i << " ";
}