#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int basic;
    char grade;

    cin >> basic >> grade;

    double totalSalary = 159.0 * basic / 100;
    if (grade == 'A')
    {
        totalSalary += 1700.0;
    }
    else if (grade == 'B')
    {
        totalSalary += 1500.0;
    }
    else
    {
        totalSalary += 1300.0;
    }
    int result = round(totalSalary);
    cout << result << endl;

    return 0;
}