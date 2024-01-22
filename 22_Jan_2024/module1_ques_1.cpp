#include <iostream>
using namespace std;
// 1.	Take values of length and breadth of a rectangle from user and check if it is square or not.
int main()
{
    int length, breadth;
    cout << "Enter length and breadth respetively" << endl;
    cin >> length >> breadth;
    if (length == breadth)
        cout << "It is square";
    else
        cout << "It is not a squre";
}
