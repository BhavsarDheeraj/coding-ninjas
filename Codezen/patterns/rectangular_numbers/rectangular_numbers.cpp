#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int i = 1;
    while (i <= 2 * n - 1)
    {
        int j = 1;
        while (j <= 2 * n - 1)
        {
            if (i < n)
            {
                cout << n - i + 1;
            }
            else if (i == (2 * n + 1) / 2)
            {
                if (j < n)
                {
                    cout << n - j + 1;
                }
                else
                {
                    cout << j - n + 1;
                }
            }
            else
            {
                cout << n - 1;
            }
            j++;
        }
        cout << endl;
        i++;
    }

    return 0;
}