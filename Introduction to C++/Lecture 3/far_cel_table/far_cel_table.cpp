#include <iostream>
using namespace std;

int main()
{
    int start, end, gap;
    cin >> start >> end >> gap;

    while (start <= end)
    {
        int cel = (5.0 / 9) * (start - 32);
        cout << start << " " << cel << endl;
        start = start + gap;
    }
    return 0;
}