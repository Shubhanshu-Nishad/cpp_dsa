#include <iostream>
using namespace std;
// 4.	A company decided to give bonus of 5% to employee if his/her year of service is more than 5 years.
// Ask user for their salary and year of service and print the net bonus amount.

int main()
{
    int salary, time;
    cin >> salary >> time;
    if (time > 5)
        cout << salary + (salary / 20);
    else
        cout << salary;
}