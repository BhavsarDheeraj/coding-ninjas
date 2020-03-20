#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int i = 1;
    int term = 0;
    if (n % 2 == 0)
    {
        term = n / 2;
    }
    else
    {
        term = n / 2 + 1;
    }

    int prev = 0;
    while (i <= term)
    {
        int j = 1;
        while (j <= n)
        {
            cout << prev + j << "\t";
            j++;
        }

        cout << endl;
        prev += n * 2;
        i++;
    }

    if (n % 2 == 0)
    {
        prev -= n;
    }
    else
    {
        prev -= 3 * n;
    }

    i = 1;
    while (i <= n / 2)
    {
        int j = 1;
        while (j <= n)
        {
            cout << prev + j << "\t";
            j++;
        }
        cout << endl;
        prev -= n * 2;
        i++;
    }

    return 0;
}