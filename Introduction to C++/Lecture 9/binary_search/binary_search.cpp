#include <iostream>
using namespace std;

int BinarySearch(int arr[], int n, int val)
{
    int start = 0;
    int end = n - 1;

    while (start <= end)
    {
        int mid = (start + end) / 2;
        if (val == arr[mid])
        {
            return mid;
        }
        else if (val > arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }

    return -1;
}

int main()
{

    int arr[] = {1, 2, 6, 8, 19, 53, 98, 32};

    cout << BinarySearch(arr, 8, 20) << endl;

    return 0;
}