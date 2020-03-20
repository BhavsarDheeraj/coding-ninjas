#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int prev = -1000000;

    bool isIncreased = false;
    bool result = true;

    for (int i = 0; i < n; i++)
    {
        int next;
        cin >> next;
        if (i == 0)
        {
            prev = next;
            continue;
        }
        if (prev > next)
        {
            if (isIncreased)
            {
                result = false;
                break;
            }
        }
        else
        {
            isIncreased = true;
        }
    }
    if (result)
    {
        cout << "true" << endl;
    }
    else
    {
        cout << "false" << endl;
    }

    return 0;
}