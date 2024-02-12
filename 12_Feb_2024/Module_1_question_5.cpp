// 5.	Take input of age of 3 people by user and determine oldest and youngest among them.

#include <iostream>
using namespace std;

int main()
{
    cout << "Enter the age of people : ";
    int age1, age2, age3;
    cin >> age1 >> age2 >> age3;
    if (age1 > age2)
    {
        if (age1 > age3)
            cout << "Age 1 is max";
        else
            cout << "Age 3 is max";
    }
    else
    {
        if (age2 > age3)
            cout << "Age 2 is max";
        else
            cout << "Age 3 is max";
    }
}