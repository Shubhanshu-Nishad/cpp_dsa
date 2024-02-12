// 9.	Modify the above question to allow student to sit if he/she has medical cause. Ask user if he/she has medical cause or not ( 'Y' or 'N' ) and print accordingly.
#include <iostream>
using namespace std;

int main()
{
    cout << "Enter yes if you have medical casue or no : ";
    char ch;
    cin >> ch;
    if (ch == 'y')
        cout << "Allowed to sit";
    else
        cout << "Not allowed to sit";
}