#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    // Write your code here
    int n;
    cin >> n;
    int i = 2;
    while (i <= n)
    {
        int d = 2;
        bool isPrime = true;
        while (d <= sqrt(i))
        {
            if (i % d == 0)
            {
                isPrime = false;
                break;
            }
            d++;
        }
        if (isPrime)
        {
            cout << i << endl;
        }
        i++;
    }
    return 0;
}