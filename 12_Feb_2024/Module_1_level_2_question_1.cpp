// 1.	Write a program to check if a year is leap year or not.
// If a year is divisible by 4 then it is leap year but if the year is century year like 2000, 1900, 2100 then it must be divisible by 400.
#include <iostream>
using namespace std;

int main()
{
    cout << "Enter any year : ";
    int y;
    cin >> y;
    if (y % 400 == 0)
        cout << "Leap year";
    else if (y % 4 == 0 && y % 100 != 0)
        cout << "Leap year";
    else
        cout << "Not a leap year";
}