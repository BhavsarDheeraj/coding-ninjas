#include <iostream>
using namespace std;

int main()
{
    int n, x;
    cin >> n >> x;
    unsigned int result = 1;
    while (x > 0)
    {
        result *= n;
        x--;
    }

    cout << result << endl;

    return 0;
}