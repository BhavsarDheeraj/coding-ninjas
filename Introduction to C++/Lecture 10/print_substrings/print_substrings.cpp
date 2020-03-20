#include <iostream>
using namespace std;

void printSubstrings(char str[])
{
  for (int i = 0; i < strlen(str); i++)
  {
    for (int j = i; j < strlen(str); j++)
    {
      for (int k = i; k <= j; k++)
      {
        cout << str[k];
      }
      cout << endl;
    }
  }
}

int main()
{
  char str[] = "abcde";
  printSubstrings(str);
  return 0;
}