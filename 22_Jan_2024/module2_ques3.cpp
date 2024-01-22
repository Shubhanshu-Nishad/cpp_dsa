// 3.	A shop will give discount of 10% if the cost of purchased quantity is more than 1000.
// Ask user for quantity
// Suppose, one unit will cost 100.
// Judge and print total cost for user
#include <iostream>
using namespace std;

int main()
{
    int q;
    cin >> q;
    if (q * 100 < 1000)
        cout << q * 1000;
    else
        cout << (q * 1000) - (q * 1000) / 10;
}