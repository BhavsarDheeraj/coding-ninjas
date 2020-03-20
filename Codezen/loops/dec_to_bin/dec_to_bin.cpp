#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int bin[32];

    int i = 0;

    while (n > 0)
    {
        bin[i] = n % 2;
        i++;
        n /= 2;
    }

    int j = i - 1;
    while (j >= 0)
    {
        cout << bin[j];
        j--;
    }

    cout << endl;

    return 0;
}