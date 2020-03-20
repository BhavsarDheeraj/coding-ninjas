#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int i = 0;
    while (i < n)
    {
        int j = 1;
        int k;
        while (j <= n)
        {
            if (i < n / 2)
            {
                if (j <= n / 2 - i + 1 || j > n / 2 + i)
                {
                    cout << '*';
                }
                else
                {
                    cout << ' ';
                }
            }
            else if (i == n / 2)
            {
                if (j == 1 || j == n)
                {
                    cout << '*';
                }
                else
                {
                    cout << ' ';
                }
                k = n / 2;
            }
            else
            {
                if (j <= n / 2 - k + 1 || j > n / 2 + k)
                {
                    cout << '*';
                }
                else
                {
                    cout << ' ';
                }
            }
            j++;
        }
        cout << endl;
        i++;
        k--;
    }

    return 0;
}