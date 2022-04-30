#include <iostream>
using namespace std;

int main()
{
    //initialising variables 
    int num,rem,temp,sum=0;
    cout << "Enter three digit number = ";
    cin >> num;
    temp = num;
     
    //here at first we seperate each number
    //then in second we initialized sum to zero then multiply rem 3 times and 
    //at third divide num by 10 and repeat these steps

    while(num > 0)
    {
        rem = num % 10;
        sum = sum + (rem*rem*rem);
        num = num/10;

    }
      //here if the addition of the all 3 numbers square is equal to the actual number thrn its Armstrong number
    if(temp == sum)
    cout << " The given number is Armstrong";
    else
    cout << " The given number is not Armstrong";
    return 0; 
}