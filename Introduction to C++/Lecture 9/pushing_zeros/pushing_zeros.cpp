#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 4, 6, 0, 7, 0, 0, 12};
    int j = 0;
    for (int i = 0; i < 8; i++)
    {
        if (arr[i] != 0)
        {
            arr[j] = arr[i];
            j++;
        }
    }

    while (j < 8)
    {
        arr[j] = 0;
        j++;
    }

    for (int i = 0; i < 8; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}