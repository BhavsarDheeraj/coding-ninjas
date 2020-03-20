#include <iostream>
using namespace std;

int main()
{
    unsigned long long int n;
    cin >> n;

    unsigned long long int count = 0;
    while (n > 0)
    {
        int digit = n % 2;
        if (digit == 1)
            count++;
        n /= 2;
    }
    cout << count << endl;
    return 0;
}