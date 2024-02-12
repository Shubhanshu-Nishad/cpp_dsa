// 7.	A student will not be allowed to sit in exam if his/her attendence is less than 75%.
// Take following input from user
// Number of classes held
// Number of classes attended.
// And print
// percentage of class attended
// Is student is allowed to sit in exam or not.
#include <iostream>
using namespace std;

int main()
{
    cout << "Enter No of classes held : ";
    int n;
    cin >> n;
    int na;
    cout << "Enter no of classes attended : ";
    cin >> na;
    float per = (na * 100) / (n);
    cout << "You attendence is : " << per << endl;
    if (per > 75)
        cout << "You are allowed to sit";
    else
        cout << "You are not alllowed to sit";
}