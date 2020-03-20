#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int first = 1;
    int second = 1;
    bool isMember = false;
    while (second <= n)
    {
        int temp = second;
        second += first;
        first = temp;
        if (first == n)
        {
            isMember = true;
        }
    }

    cout << isMember << endl;

    return 0;
}