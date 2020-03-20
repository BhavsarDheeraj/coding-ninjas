#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int i = n;
    int val = 1;
    while (i >= 1)
    {
        int j = 1;
        while (j <= n)
        {
            if (j < i)
            {
                cout << " ";
            }
            else
            {
                cout << val;
                val++;
            }
            j++;
        }
        cout << endl;
        i--;
    }

    return 0;
}