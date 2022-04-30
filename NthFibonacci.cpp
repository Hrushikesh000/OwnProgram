//Fibonacci Series using Recursion
#include<bits/stdc++.h>
using namespace std;
 //logical function here come the value of N
int F(int N)
{
    //N should be greater than 1 because we want nth term and nth term should be graeter than 1
    if (N <= 1)
       {
        return N;
       }
     // this is a formulae to find Nth term fibonacci number  
    return F(N-1) + F(N-2);
}
 //main funciton
int main ()  
{
    int N;
    cout << "enter the number = ";
    cin >> N;
    //sending the values of N to the F function and print final value
    cout << F(N);
    return 0;
}