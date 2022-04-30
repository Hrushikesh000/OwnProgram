#include <iostream>
using namespace std;
//main function
int main()
{
    int num;
    //initialising a and b to 0 and 1 respectively to calculate next term we have to previous 2 terms thats why 
    int a=0, b=1;
    cout << "enter the number = ";
    cin >> num;
     // print value of a and b
    cout << a << ", " << b << ", ";

    int nextTerm;
     //here we initialised i to 2 beacuse we set a and b to 0 and 1 so our i must be 2
     //we add a and b in nextTerm to find next term and then 
     //set a = b and b to nextTerm
     //and then print nextTerm and iterate loos once again till i is less than num
    for(int i=2; i< num; i++)
    {
        nextTerm = a+b;
        a=b;
        b= nextTerm;
        cout << nextTerm << ", ";

    }

}