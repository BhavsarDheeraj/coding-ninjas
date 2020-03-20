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
        while (space <= 2 * (n - i))
        {
            cout << " ";
            space++;
        }
        int j = 1;
        int val = i;
        while (j <= i)
        {
            cout << val;
            val++;
            j++;
        }
        cout << endl;
        i++;
    }

    return 0;
}