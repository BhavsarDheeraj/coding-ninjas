#include <iostream>
#include <cmath>
using namespace std;

bool isPallindrome(int n)
{
    int orig = n;
    int rev = 0;
    while (n > 0)
    {
        int digit = n % 10;
        rev = rev * 10 + digit;
        n /= 10;
    }
    return rev == orig;
}

int main()
{
    int n;
    cin >> n;

    int i = 1;
    while (i <= n)
    {
        if (isPallindrome(i))
            cout << i << endl;
        i++;
    }

    return 0;
}