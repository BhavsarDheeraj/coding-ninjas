#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        arr[i] = 0;
    }

    for (unsigned long long int i = 2; pow(i, 3) <= n; i++)
    {
        long long int cube = pow(i, 3);
        if (arr[cube - 1] == 0)
        {
            arr[cube - 1] = 1;
            for (int j = 1;; j++)
            {
                long long int mul = j * cube;
                if (mul > n)
                {
                    break;
                }
                else
                {
                    arr[mul - 1] = 1;
                }
            }
        }
    }

    if (arr[n - 1] == 1)
    {
        cout << "Not Cube Free" << endl;
    }
    else
    {
        int pos = 0;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] == 0)
            {
                pos++;
            }
        }
        cout << pos << endl;
    }

    return 0;
}