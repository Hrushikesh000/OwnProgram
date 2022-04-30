#include <iostream>
using namespace std;

int main()
{
    double Base,Power,Res = 1.0;
    cout << " Enter the Base and Power variable = ";
    cin >> Base >> Power;

    while(Power != 0){
        Res = Res*Base;
        Power--;
          
    }
    cout << "Result is = " << Res;
}