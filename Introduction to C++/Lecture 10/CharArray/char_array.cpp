#include <iostream>
using namespace std;

void reverseStringWordWise(char input[])
{
    int i = 0;
    while (input[i] != '\0')
    {

        //Get word
        int end = i;
        while (input[end] != ' ' && input[end] != '\0')
        {
            end++;
        }

        //Reverse Word
        for (int j = i, k = end - 1, x = 0; x < (end - i) / 2; j++, k--, x++)
        {
            char temp = input[j];
            input[j] = input[k];
            input[k] = temp;
        }

        i = end + 1;
    }

    int len = 0;

    while (input[len] != '\0')
    {
        len++;
    }

    cout << input << endl;

    for (int j = 0, k = len - 1; j < len / 2; j++, k--)
    {
        char temp = input[j];
        input[j] = input[k];
        input[k] = temp;
    }
}

int main()
{

    char arr[100];
    cin.getline(arr, 100);
    reverseStringWordWise(arr);
    cout << arr << endl;
    return 0;
}