#include <iostream>
using namespace std;

int main()
{
    int f;
    cout << "Enter a value in Fahrenheit" << endl;
    cin >> f;
    float c = (5.0 / 9) * (f - 32);
    cout << c << endl;
    return 0;
}