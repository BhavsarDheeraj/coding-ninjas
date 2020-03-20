#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int i = 1;
    while (i <= n)
    {
        int space = 1;
        while (space <= i - 1)
        {
            cout << ' ';
            space++;
        }

        int j = 0;
        while (j <= n - i)
        {
            char ch = 65 + j;
            cout << ch;
            j++;
        }
        j = n - i;
        while (j >= 0)
        {
            char ch = 65 + j;
            cout << ch;
            j--;
        }

        cout << endl;
        i++;
    }

    return 0;
}