#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int getPrevCount(string str)
{
    return pow(2, str.size() - 1);
}

int getBinCount(string str)
{
    int count = 0;

    for (int i = str.size() - 1; i > 0; i--)
    {
        if (str[i] != '0')
        {
            str[i] = '1';
        }
    }

    for (int i = 1; i < str.size() - 1; i++)
    {
        if (str[i] == '1')
        {
            count += pow(2, str.size() - i) - 1;
            break;
        }
    }
    return count;
}

int main()
{
    int n;
    cin >> n;

    string str = to_string(n);

    int count = 0;

    if (str[0] != '1')
    {
        count = getPrevCount(str) * 2;
    }
    else
    {
        count = getBinCount(str) + getPrevCount(str);
    }

    cout << count << endl;

    return 0;
}