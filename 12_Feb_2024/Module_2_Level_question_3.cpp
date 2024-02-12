// 3.	A 4 digit number is entered through keyboard. Write a program to print a new number with digits reversed as of orignal one. E.g.-
// INPUT : 1234        OUTPUT : 4321
// INPUT : 5982        OUTPUT : 2895
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    cout << "Enter any 4 digit number : ";
    int n;
    cin >> n;
    int temp = 0;
    while (n != 0)
    {
        temp = n % 10 + temp * 10;
        n /= 10;
    }
    cout << temp;
}