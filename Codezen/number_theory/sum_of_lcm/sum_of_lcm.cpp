#include <iostream>
using namespace std;

unsigned long long int gcd(unsigned long long int a, unsigned long long int b)
{
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}

unsigned long long int lcm(unsigned long long int a, unsigned long long int b)
{
    return a * b / gcd(a, b);
}

int main()
{
    unsigned long long int n;
    cin >> n;

    unsigned long long int i = 1;
    unsigned long long int sum = 0;
    while (i <= n)
    {
        sum += lcm(i, n);
        i++;
    }

    cout << sum;

    return 0;
}