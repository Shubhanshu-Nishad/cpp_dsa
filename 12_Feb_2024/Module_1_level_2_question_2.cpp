// 2.	Ask user to enter age, sex ( M or F ), marital status ( Y or N ) and then using following rules print their place of service.
// if employee is female, then she will work only in urban areas.

// if employee is a male and age is in between 20 to 40 then he may work in anywhere

// if employee is male and age is in between 40 t0 60 then he will work in urban areas only.
#include <iostream>
using namespace std;

int main()
{
    cout << "Enter your sex : ";
    char sex;
    cin >> sex;
    int age;
    cout << "Enter your age : ";
    cin >> age;
    if (sex == 'F')
        cout << "Work in urban";
    else if (sex == 'M' && (age >= 20 && age <= 40))
        cout << "Work anywhere";
    else
        cout << "Work in urban area";
}