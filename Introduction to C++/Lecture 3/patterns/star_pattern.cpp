#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int i = 1;
    int col = (n * 2) - 1;
    while (i <= n)
    {
        int j = 1;
        while (j <= col)
        {
            if (j >= ((col / 2) + 1 - (i - 1)) && j <= ((col / 2) + 1 + (i - 1)))
                cout << "*";
            else
                cout << " ";
            j++;
        }
        cout << endl;
        i++;
    }
    return 0;
}