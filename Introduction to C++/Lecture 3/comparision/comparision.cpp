#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cout << "Enter two numbers" << endl;

    cin >> a >> b;

    if (a == b)
    {
        cout << "These are equal." << endl;
    }
    else if (a < b)
    {
        cout << "B is greater." << endl;
    }
    else
    {
        cout << "A is greater." << endl;
    }

    return 0;
}