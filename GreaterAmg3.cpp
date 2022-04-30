/*
Enter the three numbers:10 20 30
30 is the greatest
*/
#include <iostream>
using namespace std;

int main()
{
int num1,num2,num3;
cout << "Enter the three numbers:";
cin >> num1 >> num2 >> num3;
if((num1 >= num2) && (num1 >= num3))
cout << num1 << " is greatest number among these 3 numbers";
else if((num2 >= num1) && (num2 >= num3))
cout << num2 << " is greatest number among these 3 numbers";
else
cout << num3 << " is greatest number among these 3 numbers";
return 0;
}